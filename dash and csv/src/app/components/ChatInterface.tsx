"use client"

import { useState } from "react"
import { Button } from "@/components/ui/button"
import { Input } from "@/components/ui/input"

export default function ChatInterface() {
  const [messages, setMessages] = useState([])
  const [input, setInput] = useState("")

  const sendMessage = async () => {
    if (!input.trim()) return

    const userMessage = { text: input, sender: "user" }
    setMessages([...messages, userMessage])
    setInput("")

    try {
      const response = await fetch("/api/chat", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ message: input }),
      })