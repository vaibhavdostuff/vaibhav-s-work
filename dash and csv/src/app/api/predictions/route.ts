import { NextResponse } from "next/server"

export async function GET(request: Request) {
  const { searchParams } = new URL(request.url)
  const id = searchParams.get("id")

  // In a real implementation, you would:
  // 1. Fetch the job status and results from the database using the job ID
  // 2. Return the actual predictions or a progress status

  // Mock predictions
  const mockPredictions = [
    {
      filename: "sales_dashboard.pbix",
      predictions: [
        "Sales are projected to increase by 15% in the next quarter",
        "The top-selling product category will likely shift to electronics",
        "Customer retention rate is expected to improve by 5%",
      ],
    },
    {
      filename: "financial_data.csv",
      predictions: [
        "Revenue is forecasted to grow by 8% annually",
        "Operating expenses are expected to decrease by 3% due to optimization efforts",
        "The debt-to-equity ratio is projected to improve from 1.5 to 1.2 over the next year",
      ],
    },
  ]

  return NextResponse.json({ predictions: mockPredictions })
}

