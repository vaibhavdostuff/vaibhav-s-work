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


    if (id) {
      fetchPredictions()
    }
  }, [id])

  if (loading) {
    return <div className="flex min-h-screen items-center justify-center">Loading predictions...</div>
  }

  return (
    <div className="flex min-h-screen flex-col items-center p-24">
      <h1 className="text-3xl font-bold mb-8">Predictions</h1>
      {predictions.map((prediction, index) => (
        <div key={index} className="w-full max-w-2xl mb-8 p-6 border rounded-lg">
          <h2 className="text-xl font-semibold mb-4">{prediction.filename}</h2>
          <ul className="list-disc pl-6">
            {prediction.predictions.map((pred, idx) => (
              <li key={idx} className="mb-2">
                {pred}
              </li>
            ))}
          </ul>
        </div>
      ))}
    </div>
  )
}

