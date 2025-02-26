"use client"

import { useState, useEffect } from "react"
import { useSearchParams } from "next/navigation"

interface Prediction {
  filename: string
  predictions: string[]
}

export default function Results() {
  const [predictions, setPredictions] = useState<Prediction[]>([])
  const [loading, setLoading] = useState(true)
  const searchParams = useSearchParams()
  const id = searchParams.get("id")

  useEffect(() => {
    const fetchPredictions = async () => {
      try {
        const response = await fetch(`/api/predictions?id=${id}`)
        if (response.ok) {
          const data = await response.json()
          setPredictions(data.predictions)
        } else {
          console.error("Failed to fetch predictions")
        }
      } catch (error) {
        console.error("Error fetching predictions:", error)
      } finally {
        setLoading(false)
      }
    }