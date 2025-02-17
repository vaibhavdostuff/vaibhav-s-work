import { NextResponse } from "next/server"

export async function GET() {
  // This is a mock implementation. In a real-world scenario, you would fetch data from Power BI here.
  const mockDashboardData = {
    data: [
      {
        x: ["Jan", "Feb", "Mar", "Apr", "May"],
        y: [20, 14, 23, 18, 30],
        type: "bar",
        name: "Sales",
      },
      {
        x: ["Jan", "Feb", "Mar", "Apr", "May"],
        y: [12, 18, 29, 22, 15],
        type: "bar",
        name: "Revenue",
      },
    ],
    layout: {
      title: "Sales and Revenue",
      barmode: "group",
    },
  }

  return NextResponse.json(mockDashboardData)
}
