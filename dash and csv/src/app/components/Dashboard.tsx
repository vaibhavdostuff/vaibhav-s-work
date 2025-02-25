"use client"

import { useState, useEffect } from "react"
import Plot from "react-plotly.js"

export default function Dashboard() {
  const [dashboardData, setDashboardData] = useState(null)

  useEffect(() => {
    // Fetch dashboard data from the backend
    fetch("/api/dashboard")
      .then((response) => response.json())
      .then((data) => setDashboardData(data))
  }, [])

  if (!dashboardData) {
    return <div>Loading dashboard...</div>
  }

  return (
    <div className="w-full md:w-1/2">
      <h2 className="text-2xl font-semibold mb-4">Dashboard</h2>
      <Plot data={dashboardData.data} layout={dashboardData.layout} config={{ responsive: true }} />
    </div>
  )
}
