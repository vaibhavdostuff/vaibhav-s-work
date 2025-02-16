import Link from "next/link"
import { Button } from "@/components/ui/button"

export default function Home() {
  return (
    <main className="flex min-h-screen flex-col items-center justify-center p-24">
      <h1 className="text-4xl font-bold mb-8">Power BI & CSV Prediction Tool</h1>
      <p className="text-xl mb-8">Upload your Power BI dashboards and CSV files to get future predictions</p>
      <Link href="/upload">
        <Button size="lg">Get Started</Button>
      </Link>
    </main>
  )
}

