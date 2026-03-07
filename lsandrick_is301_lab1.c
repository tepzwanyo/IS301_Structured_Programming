/*
 * Author: [Sandrick Luther]
 * Student ID: [240155]
 * Date: [6/3/2026]
 * Description: Customer Bill Calculator for 5 products with 8.35% sales tax
 */

#include <stdio.h>

// Define constants for unit prices and tax rate
#define TV_PRICE 400.00
#define MONITOR_PRICE 220.00
#define FLASH_DRIVE_PRICE 35.20
#define HARD_DRIVE_PRICE 150.00
#define DESKJET_PRICE 300.00
#define TAX_RATE 0.0835

int main() {
    // Variable declarations
    int tv_qty, monitor_qty, flash_qty, hard_qty, deskyet_qty;
    
    float tv_total, monitor_total, flash_total, hard_total, deskyet_total;
    float subtotal, tax_amount, total_bill;
    
    // Display program header
    printf("============================================\n");
    printf("     CUSTOMER BILL CALCULATION SYSTEM\n");
    printf("============================================\n\n");
    
    // Get user inputs with prompts
    printf("How Many TVs Were Sold? ");
    scanf("%d", &tv_qty);
    
    printf("How Many Monitors Were Sold? ");
    scanf("%d", &monitor_qty);
    
    printf("How Many Flash Drives Were Sold? ");
    scanf("%d", &flash_qty);
    
    printf("How Many Hard Drives Were Sold? ");
    scanf("%d", &hard_qty);
    
    printf("How Many Deskjet Printers Were Sold? ");
    scanf("%d", &deskyet_qty);
    
    // Calculate total for each product
    tv_total = tv_qty * TV_PRICE;
    monitor_total = monitor_qty * MONITOR_PRICE;
    flash_total = flash_qty * FLASH_DRIVE_PRICE;
    hard_total = hard_qty * HARD_DRIVE_PRICE;
    deskyet_total = deskyet_qty * DESKJET_PRICE;
    
    // Calculate subtotal
    subtotal = tv_total + monitor_total + flash_total + 
               hard_total + deskyet_total;
    
    // Calculate tax and total
    tax_amount = subtotal * TAX_RATE;
    total_bill = subtotal + tax_amount;
    
    // Display the bill in formatted table
    printf("\n\n");
    printf("========================================================\n");
    printf("                    CUSTOMER BILL\n");
    printf("========================================================\n");
    printf("QTY   DESCRIPTION        UNIT PRICE    TOTAL PRICE\n");
    printf("========================================================\n");
    
    printf("%-5d %-18s %10.2f %12.2f\n", tv_qty, "TV", TV_PRICE, tv_total);
    printf("%-5d %-18s %10.2f %12.2f\n", monitor_qty, "Monitor", MONITOR_PRICE, monitor_total);
    printf("%-5d %-18s %10.2f %12.2f\n", flash_qty, "Flash Drive", FLASH_DRIVE_PRICE, flash_total);
    printf("%-5d %-18s %10.2f %12.2f\n", hard_qty, "Hard Drive", HARD_DRIVE_PRICE, hard_total);
    printf("%-5d %-18s %10.2f %12.2f\n", deskyet_qty, "Deskjet Printer", DESKJET_PRICE, deskyet_total);
    
    printf("========================================================\n");
    printf("%44s %12.2f\n", "Subtotal:", subtotal);
    printf("%44s %12.2f\n", "Tax (8.35%):", tax_amount);
    printf("%44s %12.2f\n", "Total:", total_bill);
    printf("========================================================\n");
    
    return 0;
}

