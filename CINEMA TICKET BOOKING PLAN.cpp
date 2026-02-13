#include <iostream>
using namespace std;

const int showlimit = 5;
const int maxcustomers = 50;
const int namesize = 30;
const int mobilesize = 15;
const int perBookingMaxSeats = 3;

int main() 
{
    
    int showid[showlimit];
    char movietitle0[namesize], movietitle1[namesize], movietitle2[namesize], movietitle3[namesize], movietitle4[namesize];
    int screenn[showlimit];
    int showd[showlimit], showm[showlimit], showyy[showlimit];
    int showtime[showlimit];
    int ticketprice[showlimit];
    int totalseats[showlimit];
    int bookedseats[showlimit];
    int showcount = 0;

    
    int bookingid[maxcustomers];
    int bookingshowid[maxcustomers];
    char customer0[namesize], customer1[namesize], customer2[namesize], customer3[namesize], customer4[namesize],
        customer5[namesize], customer6[namesize], customer7[namesize], customer8[namesize], customer9[namesize],
        customer10[namesize], customer11[namesize], customer12[namesize], customer13[namesize], customer14[namesize],
        customer15[namesize], customer16[namesize], customer17[namesize], customer18[namesize], customer19[namesize],
        customer20[namesize], customer21[namesize], customer22[namesize], customer23[namesize], customer24[namesize],
        customer25[namesize], customer26[namesize], customer27[namesize], customer28[namesize], customer29[namesize],
        customer30[namesize], customer31[namesize], customer32[namesize], customer33[namesize], customer34[namesize],
        customer35[namesize], customer36[namesize], customer37[namesize], customer38[namesize], customer39[namesize],
        customer40[namesize], customer41[namesize], customer42[namesize], customer43[namesize], customer44[namesize],
        customer45[namesize], customer46[namesize], customer47[namesize], customer48[namesize], customer49[namesize];

    char customermobile0[mobilesize], customermobile1[mobilesize], customermobile2[mobilesize], customermobile3[mobilesize], customermobile4[mobilesize],
        customermobile5[mobilesize], customermobile6[mobilesize], customermobile7[mobilesize], customermobile8[mobilesize], customermobile9[mobilesize],
        customermobile10[mobilesize], customermobile11[mobilesize], customermobile12[mobilesize], customermobile13[mobilesize], customermobile14[mobilesize],
        customermobile15[mobilesize], customermobile16[mobilesize], customermobile17[mobilesize], customermobile18[mobilesize], customermobile19[mobilesize],
        customermobile20[mobilesize], customermobile21[mobilesize], customermobile22[mobilesize], customermobile23[mobilesize], customermobile24[mobilesize],
        customermobile25[mobilesize], customermobile26[mobilesize], customermobile27[mobilesize], customermobile28[mobilesize], customermobile29[mobilesize],
        customermobile30[mobilesize], customermobile31[mobilesize], customermobile32[mobilesize], customermobile33[mobilesize], customermobile34[mobilesize],
        customermobile35[mobilesize], customermobile36[mobilesize], customermobile37[mobilesize], customermobile38[mobilesize], customermobile39[mobilesize],
        customermobile40[mobilesize], customermobile41[mobilesize], customermobile42[mobilesize], customermobile43[mobilesize], customermobile44[mobilesize],
        customermobile45[mobilesize], customermobile46[mobilesize], customermobile47[mobilesize], customermobile48[mobilesize], customermobile49[mobilesize];

    int ticketcount[maxcustomers];
    int seatnumbers[maxcustomers * perBookingMaxSeats];
    int billamount[maxcustomers];
    int bookingcount = 0;
    int nextBookingID = 1;

    int choice;

    do {
        cout << endl << "======= Cinema Ticket Booking =======" << endl;
        cout << "1) Add / Replace Show Records" << endl;
        cout << "2) Display All Shows & Availability" << endl;
        cout << "3) Book Tickets" << endl;
        cout << "4) Cancel Booking" << endl;
        cout << "5) Display Seat Map for a Show" << endl;
        cout << "6) Update Booking Record" << endl;
        cout << "7) Search / Listings" << endl;
        cout << "8) Validate Records & Detect Conflicts" << endl;
        cout << "9) Reports / Summaries" << endl;
        cout << "0) Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); 

        if (choice == 1) {
            if (showcount >= showlimit) {
                cout << "Show limit reached!" << endl;
                continue;
            }
            cout << "Enter Show ID: ";
            cin >> showid[showcount];
            cin.ignore();
            cout << "Enter Movie Title: ";
            if (showcount == 0) cin.getline(movietitle0, namesize);
            else if (showcount == 1) 
                cin.getline(movietitle1, namesize);
            else if (showcount == 2) 
                cin.getline(movietitle2, namesize);
            else if (showcount == 3)
                cin.getline(movietitle3, namesize);
            else if (showcount == 4)
                cin.getline(movietitle4, namesize);
            cout << "Screen No: "; 
            cin >> screenn[showcount];
            cin.ignore();
            cout << "Date (DD MM YYYY): "; 
            cin >> showd[showcount] >> showm[showcount] >> showyy[showcount];
            cin.ignore();
            cout << "Start Time: ";
            cin >> showtime[showcount]; 
            cin.ignore();
            cout << "Ticket Price: ";
            cin >> ticketprice[showcount]; 
            cin.ignore();
            cout << "Total Seats: ";
            cin >> totalseats[showcount];
            cin.ignore();
            bookedseats[showcount] = 0;
            showcount++;
        }

        else if (choice == 2) 
        { 
            if (showcount == 0) cout << "No shows available." << endl;
            else {
                for (int i = 0;i < showcount;i++) {
                    cout << endl << "Show ID: " << showid[i];
                    cout << endl << "Movie: ";
                    if (i == 0) cout << movietitle0;
                    else if (i == 1) cout << movietitle1;
                    else if (i == 2) cout << movietitle2;
                    else if (i == 3) cout << movietitle3;
                    else if (i == 4) cout << movietitle4;
                    cout << endl << "Screen: " << screenn[i];
                    cout << endl << "Date: " << showd[i] << "/" << showm[i] << "/" << showyy[i];
                    cout << endl << "Time: " << showtime[i];
                    cout << endl << "Price: " << ticketprice[i];
                    cout << endl << "Booked Seats: " << bookedseats[i];
                    cout << endl << "Remaining Seats: " << (totalseats[i] - bookedseats[i]) << "\n";
                }
            }
        }

        else if (choice == 3)
        {
            if (bookingcount >= maxcustomers) { cout << "Customer limit reached!\n"; continue; }
            int sid;
            cout << "Enter Show ID to book: "; cin >> sid; cin.ignore();
            int shindex = -1;
            for (int i = 0;i < showcount;i++) if (showid[i] == sid) shindex = i;
            if (shindex == -1) { cout << "Show not found\n"; continue; }

            int currentBooking = bookingcount;
            bookingid[currentBooking] = nextBookingID++;
            bookingshowid[currentBooking] = sid;

            cout << "Enter Customer Name: ";
            if (currentBooking == 0) cin.getline(customer0, namesize);
            else if (currentBooking == 1) cin.getline(customer1, namesize);
            else if (currentBooking == 2) cin.getline(customer2, namesize);
            else if (currentBooking == 3) cin.getline(customer3, namesize);
            else if (currentBooking == 4) cin.getline(customer4, namesize);
            

            cout << "Enter Customer Mobile: ";
            if (currentBooking == 0) cin.getline(customermobile0, mobilesize);
            else if (currentBooking == 1) cin.getline(customermobile1, mobilesize);
            else if (currentBooking == 2) cin.getline(customermobile2, mobilesize);
            else if (currentBooking == 3) cin.getline(customermobile3, mobilesize);
            else if (currentBooking == 4) cin.getline(customermobile4, mobilesize);
            else if (currentBooking == 5) cin.getline(customermobile5, mobilesize);
            else if (currentBooking == 6) cin.getline(customermobile6, mobilesize);
            else if (currentBooking == 7) cin.getline(customermobile7, mobilesize);
            else if (currentBooking == 8) cin.getline(customermobile8, mobilesize);
            else if (currentBooking == 9) cin.getline(customermobile9, mobilesize);
            else if (currentBooking == 10) cin.getline(customermobile10, mobilesize);
            else if (currentBooking == 11) cin.getline(customermobile11, mobilesize);
            else if (currentBooking == 12) cin.getline(customermobile12, mobilesize);
            else if (currentBooking == 13) cin.getline(customermobile13, mobilesize);
            else if (currentBooking == 14) cin.getline(customermobile14, mobilesize);
            else if (currentBooking == 15) cin.getline(customermobile15, mobilesize);
            else if (currentBooking == 16) cin.getline(customermobile16, mobilesize);
            else if (currentBooking == 17) cin.getline(customermobile17, mobilesize);
            else if (currentBooking == 18) cin.getline(customermobile18, mobilesize);
            else if (currentBooking == 19) cin.getline(customermobile19, mobilesize);
            else if (currentBooking == 20) cin.getline(customermobile20, mobilesize);
            else if (currentBooking == 21) cin.getline(customermobile21, mobilesize);
            else if (currentBooking == 22) cin.getline(customermobile22, mobilesize);
            else if (currentBooking == 23) cin.getline(customermobile23, mobilesize);
            else if (currentBooking == 24) cin.getline(customermobile24, mobilesize);
            else if (currentBooking == 25) cin.getline(customermobile25, mobilesize);
            else if (currentBooking == 26) cin.getline(customermobile26, mobilesize);
            else if (currentBooking == 27) cin.getline(customermobile27, mobilesize);
            else if (currentBooking == 28) cin.getline(customermobile28, mobilesize);
            else if (currentBooking == 29) cin.getline(customermobile29, mobilesize);
            else if (currentBooking == 30) cin.getline(customermobile30, mobilesize);
            else if (currentBooking == 31) cin.getline(customermobile31, mobilesize);
            else if (currentBooking == 32) cin.getline(customermobile32, mobilesize);
            else if (currentBooking == 33) cin.getline(customermobile33, mobilesize);
            else if (currentBooking == 34) cin.getline(customermobile34, mobilesize);
            else if (currentBooking == 35) cin.getline(customermobile35, mobilesize);
            else if (currentBooking == 36) cin.getline(customermobile36, mobilesize);
            else if (currentBooking == 37) cin.getline(customermobile37, mobilesize);
            else if (currentBooking == 38) cin.getline(customermobile38, mobilesize);
            else if (currentBooking == 39) cin.getline(customermobile39, mobilesize);
            else if (currentBooking == 40) cin.getline(customermobile40, mobilesize);
            else if (currentBooking == 41) cin.getline(customermobile41, mobilesize);
            else if (currentBooking == 42) cin.getline(customermobile42, mobilesize);
            else if (currentBooking == 43) cin.getline(customermobile43, mobilesize);
            else if (currentBooking == 44) cin.getline(customermobile44, mobilesize);
            else if (currentBooking == 45) cin.getline(customermobile45, mobilesize);
            else if (currentBooking == 46) cin.getline(customermobile46, mobilesize);
            else if (currentBooking == 47) cin.getline(customermobile47, mobilesize);
            else if (currentBooking == 48) cin.getline(customermobile48, mobilesize);
            else if (currentBooking == 49) cin.getline(customermobile49, mobilesize);


            cout << "Enter number of tickets (max 3): ";
            cin >> ticketcount[currentBooking];
            cin.ignore();
            if (ticketcount[currentBooking] < 1 || ticketcount[currentBooking]>3 || bookedseats[shindex] + ticketcount[currentBooking] > totalseats[shindex])
            {
                cout << "Cannot book tickets\n"; continue;
            }

            int base = currentBooking * perBookingMaxSeats;
            for (int j = 0;j < ticketcount[currentBooking];j++)
            {
                cout << "Enter Seat Number: "; cin >> seatnumbers[base + j]; cin.ignore();
            }

            bookedseats[shindex] += ticketcount[currentBooking];
            billamount[currentBooking] = ticketcount[currentBooking] * ticketprice[shindex];
            bookingcount++;
            cout << "Booking successful! Your Booking ID is " << bookingid[currentBooking] << "\n";
        }
        else if (choice == 4)
        { 
            int bkid;
            cout << "Enter Booking ID to cancel: ";
            cin >> bkid; cin.ignore();

            int bindex = -1;
            for (int i = 0; i < bookingcount; i++) {
                if (bookingid[i] == bkid) {
                    bindex = i;
                    break;
                }
            }

            if (bindex == -1) {
                cout << "Booking not found" << endl;
                continue;
            }

            int sid = bookingshowid[bindex];
            int shindex = -1;
            for (int i = 0; i < showcount; i++)
            {
                if (showid[i] == sid) shindex = i;
            }
            if (shindex != -1) bookedseats[shindex] -= ticketcount[bindex];

           
            for (int i = bindex; i < bookingcount - 1; i++) {
                bookingid[i] = bookingid[i + 1];
                bookingshowid[i] = bookingshowid[i + 1];
                ticketcount[i] = ticketcount[i + 1];
                billamount[i] = billamount[i + 1];

                
                if (i == 0) for (int j = 0;j < namesize;j++) customer0[j] = customer1[j];
                if (i == 1) for (int j = 0;j < namesize;j++) customer1[j] = customer2[j];
                if (i == 2) for (int j = 0;j < namesize;j++) customer2[j] = customer3[j];
                if (i == 3) for (int j = 0;j < namesize;j++) customer3[j] = customer4[j];
                if (i == 4) for (int j = 0;j < namesize;j++) customer4[j] = customer5[j];
                if (i == 5) for (int j = 0;j < namesize;j++) customer5[j] = customer6[j];
                if (i == 6) for (int j = 0;j < namesize;j++) customer6[j] = customer7[j];
                if (i == 7) for (int j = 0;j < namesize;j++) customer7[j] = customer8[j];
                if (i == 8) for (int j = 0;j < namesize;j++) customer8[j] = customer9[j];
                if (i == 9) for (int j = 0;j < namesize;j++) customer9[j] = customer10[j];
                if (i == 10) for (int j = 0;j < namesize;j++) customer10[j] = customer11[j];
                if (i == 11) for (int j = 0;j < namesize;j++) customer11[j] = customer12[j];
                if (i == 12) for (int j = 0;j < namesize;j++) customer12[j] = customer13[j];
                if (i == 13) for (int j = 0;j < namesize;j++) customer13[j] = customer14[j];
                if (i == 14) for (int j = 0;j < namesize;j++) customer14[j] = customer15[j];
                if (i == 15) for (int j = 0;j < namesize;j++) customer15[j] = customer16[j];
                if (i == 16) for (int j = 0;j < namesize;j++) customer16[j] = customer17[j];
                if (i == 17) for (int j = 0;j < namesize;j++) customer17[j] = customer18[j];
                if (i == 18) for (int j = 0;j < namesize;j++) customer18[j] = customer19[j];
                if (i == 19) for (int j = 0;j < namesize;j++) customer19[j] = customer20[j];
                if (i == 20) for (int j = 0;j < namesize;j++) customer20[j] = customer21[j];
                if (i == 21) for (int j = 0;j < namesize;j++) customer21[j] = customer22[j];
                if (i == 22) for (int j = 0;j < namesize;j++) customer22[j] = customer23[j];
                if (i == 23) for (int j = 0;j < namesize;j++) customer23[j] = customer24[j];
                if (i == 24) for (int j = 0;j < namesize;j++) customer24[j] = customer25[j];
                if (i == 25) for (int j = 0;j < namesize;j++) customer25[j] = customer26[j];
                if (i == 26) for (int j = 0;j < namesize;j++) customer26[j] = customer27[j];
                if (i == 27) for (int j = 0;j < namesize;j++) customer27[j] = customer28[j];
                if (i == 28) for (int j = 0;j < namesize;j++) customer28[j] = customer29[j];
                if (i == 29) for (int j = 0;j < namesize;j++) customer29[j] = customer30[j];
                if (i == 30) for (int j = 0;j < namesize;j++) customer30[j] = customer31[j];
                if (i == 31) for (int j = 0;j < namesize;j++) customer31[j] = customer32[j];
                if (i == 32) for (int j = 0;j < namesize;j++) customer32[j] = customer33[j];
                if (i == 33) for (int j = 0;j < namesize;j++) customer33[j] = customer34[j];
                if (i == 34) for (int j = 0;j < namesize;j++) customer34[j] = customer35[j];
                if (i == 35) for (int j = 0;j < namesize;j++) customer35[j] = customer36[j];
                if (i == 36) for (int j = 0;j < namesize;j++) customer36[j] = customer37[j];
                if (i == 37) for (int j = 0;j < namesize;j++) customer37[j] = customer38[j];
                if (i == 38) for (int j = 0;j < namesize;j++) customer38[j] = customer39[j];
                if (i == 39) for (int j = 0;j < namesize;j++) customer39[j] = customer40[j];
                if (i == 40) for (int j = 0;j < namesize;j++) customer40[j] = customer41[j];
                if (i == 41) for (int j = 0;j < namesize;j++) customer41[j] = customer42[j];
                if (i == 42) for (int j = 0;j < namesize;j++) customer42[j] = customer43[j];
                if (i == 43) for (int j = 0;j < namesize;j++) customer43[j] = customer44[j];
                if (i == 44) for (int j = 0;j < namesize;j++) customer44[j] = customer45[j];
                if (i == 45) for (int j = 0;j < namesize;j++) customer45[j] = customer46[j];
                if (i == 46) for (int j = 0;j < namesize;j++) customer46[j] = customer47[j];
                if (i == 47) for (int j = 0;j < namesize;j++) customer47[j] = customer48[j];
                if (i == 48) for (int j = 0;j < namesize;j++) customer48[j] = customer49[j];

                
                if (i == 0) for (int j = 0;j < mobilesize;j++) customermobile0[j] = customermobile1[j];
                if (i == 1) for (int j = 0;j < mobilesize;j++) customermobile1[j] = customermobile2[j];
                if (i == 2) for (int j = 0;j < mobilesize;j++) customermobile2[j] = customermobile3[j];
                if (i == 3) for (int j = 0;j < mobilesize;j++) customermobile3[j] = customermobile4[j];
                if (i == 4) for (int j = 0;j < mobilesize;j++) customermobile4[j] = customermobile5[j];
                if (i == 5) for (int j = 0;j < mobilesize;j++) customermobile5[j] = customermobile6[j];
                if (i == 6) for (int j = 0;j < mobilesize;j++) customermobile6[j] = customermobile7[j];
                if (i == 7) for (int j = 0;j < mobilesize;j++) customermobile7[j] = customermobile8[j];
                if (i == 8) for (int j = 0;j < mobilesize;j++) customermobile8[j] = customermobile9[j];
                if (i == 9) for (int j = 0;j < mobilesize;j++) customermobile9[j] = customermobile10[j];
                if (i == 10) for (int j = 0;j < mobilesize;j++) customermobile10[j] = customermobile11[j];
                if (i == 11) for (int j = 0;j < mobilesize;j++) customermobile11[j] = customermobile12[j];
                if (i == 12) for (int j = 0;j < mobilesize;j++) customermobile12[j] = customermobile13[j];
                if (i == 13) for (int j = 0;j < mobilesize;j++) customermobile13[j] = customermobile14[j];
                if (i == 14) for (int j = 0;j < mobilesize;j++) customermobile14[j] = customermobile15[j];
                if (i == 15) for (int j = 0;j < mobilesize;j++) customermobile15[j] = customermobile16[j];
                if (i == 16) for (int j = 0;j < mobilesize;j++) customermobile16[j] = customermobile17[j];
                if (i == 17) for (int j = 0;j < mobilesize;j++) customermobile17[j] = customermobile18[j];
                if (i == 18) for (int j = 0;j < mobilesize;j++) customermobile18[j] = customermobile19[j];
                if (i == 19) for (int j = 0;j < mobilesize;j++) customermobile19[j] = customermobile20[j];
                if (i == 20) for (int j = 0;j < mobilesize;j++) customermobile20[j] = customermobile21[j];
                if (i == 21) for (int j = 0;j < mobilesize;j++) customermobile21[j] = customermobile22[j];
                if (i == 22) for (int j = 0;j < mobilesize;j++) customermobile22[j] = customermobile23[j];
                if (i == 23) for (int j = 0;j < mobilesize;j++) customermobile23[j] = customermobile24[j];
                if (i == 24) for (int j = 0;j < mobilesize;j++) customermobile24[j] = customermobile25[j];
                if (i == 25) for (int j = 0;j < mobilesize;j++) customermobile25[j] = customermobile26[j];
                if (i == 26) for (int j = 0;j < mobilesize;j++) customermobile26[j] = customermobile27[j];
                if (i == 27) for (int j = 0;j < mobilesize;j++) customermobile27[j] = customermobile28[j];
                if (i == 28) for (int j = 0;j < mobilesize;j++) customermobile28[j] = customermobile29[j];
                if (i == 29) for (int j = 0;j < mobilesize;j++) customermobile29[j] = customermobile30[j];
                if (i == 30) for (int j = 0;j < mobilesize;j++) customermobile30[j] = customermobile31[j];
                if (i == 31) for (int j = 0;j < mobilesize;j++) customermobile31[j] = customermobile32[j];
                if (i == 32) for (int j = 0;j < mobilesize;j++) customermobile32[j] = customermobile33[j];
                if (i == 33) for (int j = 0;j < mobilesize;j++) customermobile33[j] = customermobile34[j];
                if (i == 34) for (int j = 0;j < mobilesize;j++) customermobile34[j] = customermobile35[j];
                if (i == 35) for (int j = 0;j < mobilesize;j++) customermobile35[j] = customermobile36[j];
                if (i == 36) for (int j = 0;j < mobilesize;j++) customermobile36[j] = customermobile37[j];
                if (i == 37) for (int j = 0;j < mobilesize;j++) customermobile37[j] = customermobile38[j];
                if (i == 38) for (int j = 0;j < mobilesize;j++) customermobile38[j] = customermobile39[j];
                if (i == 39) for (int j = 0;j < mobilesize;j++) customermobile39[j] = customermobile40[j];
                if (i == 40) for (int j = 0;j < mobilesize;j++) customermobile40[j] = customermobile41[j];
                if (i == 41) for (int j = 0;j < mobilesize;j++) customermobile41[j] = customermobile42[j];
                if (i == 42) for (int j = 0;j < mobilesize;j++) customermobile42[j] = customermobile43[j];
                if (i == 43) for (int j = 0;j < mobilesize;j++) customermobile43[j] = customermobile44[j];
                if (i == 44) for (int j = 0;j < mobilesize;j++) customermobile44[j] = customermobile45[j];
                if (i == 45) for (int j = 0;j < mobilesize;j++) customermobile45[j] = customermobile46[j];
                if (i == 46) for (int j = 0;j < mobilesize;j++) customermobile46[j] = customermobile47[j];
                if (i == 47) for (int j = 0;j < mobilesize;j++) customermobile47[j] = customermobile48[j];
                if (i == 48) for (int j = 0;j < mobilesize;j++) customermobile48[j] = customermobile49[j];

                for (int j = 0;j < perBookingMaxSeats;j++)
                    seatnumbers[i * perBookingMaxSeats + j] = seatnumbers[(i + 1) * perBookingMaxSeats + j];
            }

            bookingcount--;
            cout << "Booking cancelled successfully" << endl;
        }
        else if (choice == 5)
        {
            int sid;
            cout << "Enter Show ID to display seat map: ";
            cin >> sid;

            int shindex = -1;
            for (int i = 0; i < showcount; i++)
            {
                if (showid[i] == sid)
                {
                    shindex = i;
                    break;
                }
            }

            if (shindex == -1)
            {
                cout << "Show not found" << endl;
            }
            else
            {
                const int seatsPerRow = 9;
                int total = totalseats[shindex];

                cout << "Seat Map (A = Available, R = Reserved)" << endl;

                for (int seat = 1; seat <= total; seat++)
                {
                    int reserved = 0;

                    for (int b = 0; b < bookingcount; b++)
                    {
                        if (bookingshowid[b] == sid)
                        {
                            int base = b * perBookingMaxSeats;

                            if (b == 0)
                            {
                                for (int k = 0; k < ticketcount[0]; k++)
                                {
                                    if (seatnumbers[base + k] == seat)
                                    {
                                        reserved = 1;
                                        break;
                                    }
                                }
                            }
                            else if (b == 1)
                            {
                                for (int k = 0; k < ticketcount[1]; k++)
                                {
                                    if (seatnumbers[base + k] == seat)
                                    {
                                        reserved = 1;
                                        break;
                                    }
                                }
                            }
                            else if (b == 2)
                            {
                                for (int k = 0; k < ticketcount[2]; k++)
                                {
                                    if (seatnumbers[base + k] == seat)
                                    {
                                        reserved = 1;
                                        break;
                                    }
                                }
                            }
                            else if (b == 49)
                            {
                                for (int k = 0; k < ticketcount[49]; k++)
                                {
                                    if (seatnumbers[base + k] == seat)
                                    {
                                        reserved = 1;
                                        break;
                                    }
                                }
                            }
                        }
                        if (reserved)
                            break;
                    }

                    if (reserved)
                        cout << " R ";
                    else
                        cout << " A ";

                    if (seat % seatsPerRow == 0)
                        cout << endl;
                }

                cout << endl;
            }
        }
        else if (choice == 6)
        {
            int bkid;
            cout << "Enter Booking ID to update: ";
            cin >> bkid;
            cin.get();

            int bindex = -1;
            for (int i = 0; i < bookingcount; i++)
            {
                if (bookingid[i] == bkid)
                {
                    bindex = i;
                    break;
                }
            }

            if (bindex == -1)
            {
                cout << "Booking not found" << endl;
            }
            else
            {
                int sid = bookingshowid[bindex];

                int shindex = -1;
                for (int i = 0; i < showcount; i++)
                {
                    if (showid[i] == sid)
                    {
                        shindex = i;
                        break;
                    }
                }

                cout << "Update Customer Name: ";
                if (bindex == 0) cin.getline(customer0, namesize);
                else if (bindex == 1) cin.getline(customer1, namesize);
                else if (bindex == 2) cin.getline(customer2, namesize);
                else if (bindex == 3) cin.getline(customer3, namesize);
                else if (bindex == 4) cin.getline(customer4, namesize);
                else if (bindex == 5) cin.getline(customer5, namesize);
                else if (bindex == 6) cin.getline(customer6, namesize);
                else if (bindex == 7) cin.getline(customer7, namesize);
                else if (bindex == 8) cin.getline(customer8, namesize);
                else if (bindex == 9) cin.getline(customer9, namesize);
                else if (bindex == 10) cin.getline(customer10, namesize);
                else if (bindex == 11) cin.getline(customer11, namesize);
                else if (bindex == 12) cin.getline(customer12, namesize);
                else if (bindex == 13) cin.getline(customer13, namesize);
                else if (bindex == 14) cin.getline(customer14, namesize);
                else if (bindex == 15) cin.getline(customer15, namesize);
                else if (bindex == 16) cin.getline(customer16, namesize);
                else if (bindex == 17) cin.getline(customer17, namesize);
                else if (bindex == 18) cin.getline(customer18, namesize);
                else if (bindex == 19) cin.getline(customer19, namesize);
                else if (bindex == 20) cin.getline(customer20, namesize);
                else if (bindex == 21) cin.getline(customer21, namesize);
                else if (bindex == 22) cin.getline(customer22, namesize);
                else if (bindex == 23) cin.getline(customer23, namesize);
                else if (bindex == 24) cin.getline(customer24, namesize);
                else if (bindex == 25) cin.getline(customer25, namesize);
                else if (bindex == 26) cin.getline(customer26, namesize);
                else if (bindex == 27) cin.getline(customer27, namesize);
                else if (bindex == 28) cin.getline(customer28, namesize);
                else if (bindex == 29) cin.getline(customer29, namesize);
                else if (bindex == 30) cin.getline(customer30, namesize);
                else if (bindex == 31) cin.getline(customer31, namesize);
                else if (bindex == 32) cin.getline(customer32, namesize);
                else if (bindex == 33) cin.getline(customer33, namesize);
                else if (bindex == 34) cin.getline(customer34, namesize);
                else if (bindex == 35) cin.getline(customer35, namesize);
                else if (bindex == 36) cin.getline(customer36, namesize);
                else if (bindex == 37) cin.getline(customer37, namesize);
                else if (bindex == 38) cin.getline(customer38, namesize);
                else if (bindex == 39) cin.getline(customer39, namesize);
                else if (bindex == 40) cin.getline(customer40, namesize);
                else if (bindex == 41) cin.getline(customer41, namesize);
                else if (bindex == 42) cin.getline(customer42, namesize);
                else if (bindex == 43) cin.getline(customer43, namesize);
                else if (bindex == 44) cin.getline(customer44, namesize);
                else if (bindex == 45) cin.getline(customer45, namesize);
                else if (bindex == 46) cin.getline(customer46, namesize);
                else if (bindex == 47) cin.getline(customer47, namesize);
                else if (bindex == 48) cin.getline(customer48, namesize);
                else if (bindex == 49) cin.getline(customer49, namesize);

                cout << "Update Customer Mobile: ";
                if (bindex == 0) cin.getline(customermobile0, mobilesize);
                else if (bindex == 1) cin.getline(customermobile1, mobilesize);
                else if (bindex == 2) cin.getline(customermobile2, mobilesize);
                else if (bindex == 3) cin.getline(customermobile3, mobilesize);
                else if (bindex == 4) cin.getline(customermobile4, mobilesize);
                else if (bindex == 5) cin.getline(customermobile5, mobilesize);
                else if (bindex == 6) cin.getline(customermobile6, mobilesize);
                else if (bindex == 7) cin.getline(customermobile7, mobilesize);
                else if (bindex == 8) cin.getline(customermobile8, mobilesize);
                else if (bindex == 9) cin.getline(customermobile9, mobilesize);
                else if (bindex == 10) cin.getline(customermobile10, mobilesize);
                else if (bindex == 11) cin.getline(customermobile11, mobilesize);
                else if (bindex == 12) cin.getline(customermobile12, mobilesize);
                else if (bindex == 13) cin.getline(customermobile13, mobilesize);
                else if (bindex == 14) cin.getline(customermobile14, mobilesize);
                else if (bindex == 15) cin.getline(customermobile15, mobilesize);
                else if (bindex == 16) cin.getline(customermobile16, mobilesize);
                else if (bindex == 17) cin.getline(customermobile17, mobilesize);
                else if (bindex == 18) cin.getline(customermobile18, mobilesize);
                else if (bindex == 19) cin.getline(customermobile19, mobilesize);
                else if (bindex == 20) cin.getline(customermobile20, mobilesize);
                else if (bindex == 21) cin.getline(customermobile21, mobilesize);
                else if (bindex == 22) cin.getline(customermobile22, mobilesize);
                else if (bindex == 23) cin.getline(customermobile23, mobilesize);
                else if (bindex == 24) cin.getline(customermobile24, mobilesize);
                else if (bindex == 25) cin.getline(customermobile25, mobilesize);
                else if (bindex == 26) cin.getline(customermobile26, mobilesize);
                else if (bindex == 27) cin.getline(customermobile27, mobilesize);
                else if (bindex == 28) cin.getline(customermobile28, mobilesize);
                else if (bindex == 29) cin.getline(customermobile29, mobilesize);
                else if (bindex == 30) cin.getline(customermobile30, mobilesize);
                else if (bindex == 31) cin.getline(customermobile31, mobilesize);
                else if (bindex == 32) cin.getline(customermobile32, mobilesize);
                else if (bindex == 33) cin.getline(customermobile33, mobilesize);
                else if (bindex == 34) cin.getline(customermobile34, mobilesize);
                else if (bindex == 35) cin.getline(customermobile35, mobilesize);
                else if (bindex == 36) cin.getline(customermobile36, mobilesize);
                else if (bindex == 37) cin.getline(customermobile37, mobilesize);
                else if (bindex == 38) cin.getline(customermobile38, mobilesize);
                else if (bindex == 39) cin.getline(customermobile39, mobilesize);
                else if (bindex == 40) cin.getline(customermobile40, mobilesize);
                else if (bindex == 41) cin.getline(customermobile41, mobilesize);
                else if (bindex == 42) cin.getline(customermobile42, mobilesize);
                else if (bindex == 43) cin.getline(customermobile43, mobilesize);
                else if (bindex == 44) cin.getline(customermobile44, mobilesize);
                else if (bindex == 45) cin.getline(customermobile45, mobilesize);
                else if (bindex == 46) cin.getline(customermobile46, mobilesize);
                else if (bindex == 47) cin.getline(customermobile47, mobilesize);
                else if (bindex == 48) cin.getline(customermobile48, mobilesize);
                else if (bindex == 49) cin.getline(customermobile49, mobilesize);

                cout << "Re-enter Seat Numbers for Booking: " << endl;

                int valid = 1;
                int base = bindex * perBookingMaxSeats;

                for (int j = 0; j < ticketcount[bindex]; j++)
                {
                    cout << "Seat Number " << (j + 1) << ": ";
                    if (bindex == 0) cin >> seatnumbers[base + j];
                    else if (bindex == 1) cin >> seatnumbers[base + j];
                    else if (bindex == 2) cin >> seatnumbers[base + j];
                    else if (bindex == 3) cin >> seatnumbers[base + j];
                    else if (bindex == 4) cin >> seatnumbers[base + j];
                    else if (bindex == 5) cin >> seatnumbers[base + j];
                    else if (bindex == 6) cin >> seatnumbers[base + j];
                    else if (bindex == 7) cin >> seatnumbers[base + j];
                    else if (bindex == 8) cin >> seatnumbers[base + j];
                    else if (bindex == 9) cin >> seatnumbers[base + j];
                    else if (bindex == 10) cin >> seatnumbers[base + j];
                    else if (bindex == 11) cin >> seatnumbers[base + j];
                    else if (bindex == 12) cin >> seatnumbers[base + j];
                    else if (bindex == 13) cin >> seatnumbers[base + j];
                    else if (bindex == 14) cin >> seatnumbers[base + j];
                    else if (bindex == 15) cin >> seatnumbers[base + j];
                    else if (bindex == 16) cin >> seatnumbers[base + j];
                    else if (bindex == 17) cin >> seatnumbers[base + j];
                    else if (bindex == 18) cin >> seatnumbers[base + j];
                    else if (bindex == 19) cin >> seatnumbers[base + j];
                    else if (bindex == 20) cin >> seatnumbers[base + j];
                    else if (bindex == 21) cin >> seatnumbers[base + j];
                    else if (bindex == 22) cin >> seatnumbers[base + j];
                    else if (bindex == 23) cin >> seatnumbers[base + j];
                    else if (bindex == 24) cin >> seatnumbers[base + j];
                    else if (bindex == 25) cin >> seatnumbers[base + j];
                    else if (bindex == 26) cin >> seatnumbers[base + j];
                    else if (bindex == 27) cin >> seatnumbers[base + j];
                    else if (bindex == 28) cin >> seatnumbers[base + j];
                    else if (bindex == 29) cin >> seatnumbers[base + j];
                    else if (bindex == 30) cin >> seatnumbers[base + j];
                    else if (bindex == 31) cin >> seatnumbers[base + j];
                    else if (bindex == 32) cin >> seatnumbers[base + j];
                    else if (bindex == 33) cin >> seatnumbers[base + j];
                    else if (bindex == 34) cin >> seatnumbers[base + j];
                    else if (bindex == 35) cin >> seatnumbers[base + j];
                    else if (bindex == 36) cin >> seatnumbers[base + j];
                    else if (bindex == 37) cin >> seatnumbers[base + j];
                    else if (bindex == 38) cin >> seatnumbers[base + j];
                    else if (bindex == 39) cin >> seatnumbers[base + j];
                    else if (bindex == 40) cin >> seatnumbers[base + j];
                    else if (bindex == 41) cin >> seatnumbers[base + j];
                    else if (bindex == 42) cin >> seatnumbers[base + j];
                    else if (bindex == 43) cin >> seatnumbers[base + j];
                    else if (bindex == 44) cin >> seatnumbers[base + j];
                    else if (bindex == 45) cin >> seatnumbers[base + j];
                    else if (bindex == 46) cin >> seatnumbers[base + j];
                    else if (bindex == 47) cin >> seatnumbers[base + j];
                    else if (bindex == 48) cin >> seatnumbers[base + j];
                    else if (bindex == 49) cin >> seatnumbers[base + j];

                    if (seatnumbers[base + j] < 1 || seatnumbers[base + j] > totalseats[shindex])
                        valid = 0;

                    for (int b = 0; b < bookingcount; b++)
                    {
                        if (b == bindex) continue;
                        if (bookingshowid[b] != sid) continue;

                        int otherBase = b * perBookingMaxSeats;
                        for (int k = 0; k < ticketcount[b]; k++)
                        {
                            if (seatnumbers[otherBase + k] == seatnumbers[base + j])
                                valid = 0;
                        }
                    }
                }

                if (!valid)
                    cout << "Seat conflict or invalid seat detected. Update failed." << endl;
                else
                    cout << "Booking updated successfully." << endl;
            }
        }
        else if (choice == 7)
        {
            int subchoice;
            cout << "Search / Listings:" << endl;
            cout << "1) Search Show by Movie Title" << endl;
            cout << "2) Search Booking by Customer Name" << endl;
            cout << "Enter choice: ";
            cin >> subchoice;
            cin.get(); 

            if (subchoice == 1)
            {
                char searchTitle[namesize];
                cout << "Enter Movie Title to search: ";
                cin.getline(searchTitle, namesize);

                int found = 0;
                for (int i = 0; i < showcount; i++)
                {
                    int match = 0;

                    if (i == 0)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (movietitle0[j] != searchTitle[j])
                            {
                                if (searchTitle[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (movietitle0[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 1)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (movietitle1[j] != searchTitle[j])
                            {
                                if (searchTitle[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (movietitle1[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 2)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (movietitle2[j] != searchTitle[j])
                            {
                                if (searchTitle[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (movietitle2[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 3)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (movietitle3[j] != searchTitle[j])
                            {
                                if (searchTitle[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (movietitle3[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 4)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (movietitle4[j] != searchTitle[j])
                            {
                                if (searchTitle[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (movietitle4[j] == '\0') 
                                break;
                        }
                    }

                    if (match)
                    {
                        found = 1;
                        cout << "Show ID: " << showid[i] << endl;
                        if (i == 0) cout << "Movie: " << movietitle0 << endl;
                        else if (i == 1) cout << "Movie: " << movietitle1 << endl;
                        else if (i == 2) cout << "Movie: " << movietitle2 << endl;
                        else if (i == 3) cout << "Movie: " << movietitle3 << endl;
                        else if (i == 4) cout << "Movie: " << movietitle4 << endl;

                        cout << "Screen: " << screenn[i] << endl;
                        cout << "Date: " << showd[i] << "/" << showm[i] << "/" << showyy[i] << endl;
                        cout << "Time: " << showtime[i] << endl;
                        cout << "Price: " << ticketprice[i] << endl;
                        cout << "Booked Seats: " << bookedseats[i] << endl;
                        cout << "Remaining Seats: " << (totalseats[i] - bookedseats[i]) << endl;
                    }
                }

                if (!found) cout << "Movie not found" << endl;
            }
            else if (subchoice == 2)
            {
                char searchName[namesize];
                cout << "Enter Customer Name to search: ";
                cin.getline(searchName, namesize);

                int found = 0;

                for (int i = 0; i < bookingcount; i++)
                {
                    int match = 0;

                    if (i == 0)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer0[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer0[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 1)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer1[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer1[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 2)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer2[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer2[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 3)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer3[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer3[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 4)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer4[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer4[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 5)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer5[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer5[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 6)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer6[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer6[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 7)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer7[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer7[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 8)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer8[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer8[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 9)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer9[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer9[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 10)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer10[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer10[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 11)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer11[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer11[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 12)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer12[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer12[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 13)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer13[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer13[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 14)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer14[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer14[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 15)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer15[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer15[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 16)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer16[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer16[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 17)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer17[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer17[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 18)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer18[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer18[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 19)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer19[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer19[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 20)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer20[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer20[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 21)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer21[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer21[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 22)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer22[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer22[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 23)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer23[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer23[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 24)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer24[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer24[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 25)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer25[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer25[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 26)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer26[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer26[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 27)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer27[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer27[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 28)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer28[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer28[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 29)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer29[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer29[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 30)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer30[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer30[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 31)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer31[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer31[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 32)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer32[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer32[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 33)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer33[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer33[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 34)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer34[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer34[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 35)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer35[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer35[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 36)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer36[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer36[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 37)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer37[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer37[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 38)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer38[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer38[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 39)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer39[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer39[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 40)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer40[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer40[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 41)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer41[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer41[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 42)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer42[j] != searchName[j])
                            {
                                if (searchName[j] == '\0') 
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer42[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 43)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer43[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer43[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 44)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer44[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer44[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 45)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer45[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer45[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 46)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer46[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer46[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 47)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer47[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer47[j] == '\0')
                                break;
                        }
                    }
                    else if (i == 48)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer48[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer48[j] == '\0') 
                                break;
                        }
                    }
                    else if (i == 49)
                    {
                        match = 1;
                        for (int j = 0; j < namesize; j++)
                        {
                            if (customer49[j] != searchName[j])
                            {
                                if (searchName[j] == '\0')
                                    break;
                                match = 0;
                                break;
                            }
                            if (customer49[j] == '\0')
                                break;
                        }
                    }
                    if (match)
                    {
                        found = 1;
                        cout << "Booking ID: " << bookingid[i] << endl;
                        cout << "Show ID: " << bookingshowid[i] << endl;

                        if (i == 0) cout << "Customer Name: " << customer0 << endl;
                        else if (i == 1) cout << "Customer Name: " << customer1 << endl;
                        else if (i == 2) cout << "Customer Name: " << customer2 << endl;
                        else if (i == 3) cout << "Customer Name: " << customer3 << endl;
                        else if (i == 4) cout << "Customer Name: " << customer4 << endl;
                        else if (i == 5) cout << "Customer Name: " << customer5 << endl;
                        else if (i == 6) cout << "Customer Name: " << customer6 << endl;
                        else if (i == 7) cout << "Customer Name: " << customer7 << endl;
                        else if (i == 8) cout << "Customer Name: " << customer8 << endl;
                        else if (i == 9) cout << "Customer Name: " << customer9 << endl;
                        else if (i == 10) cout << "Customer Name: " << customer10 << endl;
                        else if (i == 11) cout << "Customer Name: " << customer11 << endl;
                        else if (i == 12) cout << "Customer Name: " << customer12 << endl;
                        else if (i == 13) cout << "Customer Name: " << customer13 << endl;
                        else if (i == 14) cout << "Customer Name: " << customer14 << endl;
                        else if (i == 15) cout << "Customer Name: " << customer15 << endl;
                        else if (i == 16) cout << "Customer Name: " << customer16 << endl;
                        else if (i == 17) cout << "Customer Name: " << customer17 << endl;
                        else if (i == 18) cout << "Customer Name: " << customer18 << endl;
                        else if (i == 19) cout << "Customer Name: " << customer19 << endl;
                        else if (i == 20) cout << "Customer Name: " << customer20 << endl;
                        else if (i == 21) cout << "Customer Name: " << customer21 << endl;
                        else if (i == 22) cout << "Customer Name: " << customer22 << endl;
                        else if (i == 23) cout << "Customer Name: " << customer23 << endl;
                        else if (i == 24) cout << "Customer Name: " << customer24 << endl;
                        else if (i == 25) cout << "Customer Name: " << customer25 << endl;
                        else if (i == 26) cout << "Customer Name: " << customer26 << endl;
                        else if (i == 27) cout << "Customer Name: " << customer27 << endl;
                        else if (i == 28) cout << "Customer Name: " << customer28 << endl;
                        else if (i == 29) cout << "Customer Name: " << customer29 << endl;
                        else if (i == 30) cout << "Customer Name: " << customer30 << endl;
                        else if (i == 31) cout << "Customer Name: " << customer31 << endl;
                        else if (i == 32) cout << "Customer Name: " << customer32 << endl;
                        else if (i == 33) cout << "Customer Name: " << customer33 << endl;
                        else if (i == 34) cout << "Customer Name: " << customer34 << endl;
                        else if (i == 35) cout << "Customer Name: " << customer35 << endl;
                        else if (i == 36) cout << "Customer Name: " << customer36 << endl;
                        else if (i == 37) cout << "Customer Name: " << customer37 << endl;
                        else if (i == 38) cout << "Customer Name: " << customer38 << endl;
                        else if (i == 39) cout << "Customer Name: " << customer39 << endl;
                        else if (i == 40) cout << "Customer Name: " << customer40 << endl;
                        else if (i == 41) cout << "Customer Name: " << customer41 << endl;
                        else if (i == 42) cout << "Customer Name: " << customer42 << endl;
                        else if (i == 43) cout << "Customer Name: " << customer43 << endl;
                        else if (i == 44) cout << "Customer Name: " << customer44 << endl;
                        else if (i == 45) cout << "Customer Name: " << customer45 << endl;
                        else if (i == 46) cout << "Customer Name: " << customer46 << endl;
                        else if (i == 47) cout << "Customer Name: " << customer47 << endl;
                        else if (i == 48) cout << "Customer Name: " << customer48 << endl;
                        else if (i == 49) cout << "Customer Name: " << customer49 << endl;



                        if (i == 0) cout << "Customer Mobile: " << customermobile0 << endl;
                        else if (i == 1) cout << "Customer Mobile: " << customermobile1 << endl;
                        else if (i == 2) cout << "Customer Mobile: " << customermobile2 << endl;
                        else if (i == 3) cout << "Customer Mobile: " << customermobile3 << endl;
                        else if (i == 4) cout << "Customer Mobile: " << customermobile4 << endl;
                        else if (i == 5) cout << "Customer Mobile: " << customermobile5 << endl;
                        else if (i == 6) cout << "Customer Mobile: " << customermobile6 << endl;
                        else if (i == 7) cout << "Customer Mobile: " << customermobile7 << endl;
                        else if (i == 8) cout << "Customer Mobile: " << customermobile8 << endl;
                        else if (i == 9) cout << "Customer Mobile: " << customermobile9 << endl;
                        else if (i == 10) cout << "Customer Mobile: " << customermobile10 << endl;
                        else if (i == 11) cout << "Customer Mobile: " << customermobile11 << endl;
                        else if (i == 12) cout << "Customer Mobile: " << customermobile12 << endl;
                        else if (i == 13) cout << "Customer Mobile: " << customermobile13 << endl;
                        else if (i == 14) cout << "Customer Mobile: " << customermobile14 << endl;
                        else if (i == 15) cout << "Customer Mobile: " << customermobile15 << endl;
                        else if (i == 16) cout << "Customer Mobile: " << customermobile16 << endl;
                        else if (i == 17) cout << "Customer Mobile: " << customermobile17 << endl;
                        else if (i == 18) cout << "Customer Mobile: " << customermobile18 << endl;
                        else if (i == 19) cout << "Customer Mobile: " << customermobile19 << endl;
                        else if (i == 20) cout << "Customer Mobile: " << customermobile20 << endl;
                        else if (i == 21) cout << "Customer Mobile: " << customermobile21 << endl;
                        else if (i == 22) cout << "Customer Mobile: " << customermobile22 << endl;
                        else if (i == 23) cout << "Customer Mobile: " << customermobile23 << endl;
                        else if (i == 24) cout << "Customer Mobile: " << customermobile24 << endl;
                        else if (i == 25) cout << "Customer Mobile: " << customermobile25 << endl;
                        else if (i == 26) cout << "Customer Mobile: " << customermobile26 << endl;
                        else if (i == 27) cout << "Customer Mobile: " << customermobile27 << endl;
                        else if (i == 28) cout << "Customer Mobile: " << customermobile28 << endl;
                        else if (i == 29) cout << "Customer Mobile: " << customermobile29 << endl;
                        else if (i == 30) cout << "Customer Mobile: " << customermobile30 << endl;
                        else if (i == 31) cout << "Customer Mobile: " << customermobile31 << endl;
                        else if (i == 32) cout << "Customer Mobile: " << customermobile32 << endl;
                        else if (i == 33) cout << "Customer Mobile: " << customermobile33 << endl;
                        else if (i == 34) cout << "Customer Mobile: " << customermobile34 << endl;
                        else if (i == 35) cout << "Customer Mobile: " << customermobile35 << endl;
                        else if (i == 36) cout << "Customer Mobile: " << customermobile36 << endl;
                        else if (i == 37) cout << "Customer Mobile: " << customermobile37 << endl;
                        else if (i == 38) cout << "Customer Mobile: " << customermobile38 << endl;
                        else if (i == 39) cout << "Customer Mobile: " << customermobile39 << endl;
                        else if (i == 40) cout << "Customer Mobile: " << customermobile40 << endl;
                        else if (i == 41) cout << "Customer Mobile: " << customermobile41 << endl;
                        else if (i == 42) cout << "Customer Mobile: " << customermobile42 << endl;
                        else if (i == 43) cout << "Customer Mobile: " << customermobile43 << endl;
                        else if (i == 44) cout << "Customer Mobile: " << customermobile44 << endl;
                        else if (i == 45) cout << "Customer Mobile: " << customermobile45 << endl;
                        else if (i == 46) cout << "Customer Mobile: " << customermobile46 << endl;
                        else if (i == 47) cout << "Customer Mobile: " << customermobile47 << endl;
                        else if (i == 48) cout << "Customer Mobile: " << customermobile48 << endl;
                        else if (i == 49) cout << "Customer Mobile: " << customermobile49 << endl;


                        cout << "Number of Tickets: " << ticketcount[i] << endl;
                        cout << "Bill Amount: " << billamount[i] << endl;
                    }
                }

                if (!found) cout << "Customer not found" << endl;
            }
            else
            {
                cout << "Invalid choice" << endl;
            }
        }

        else if (choice == 8)
        {
            cout << "Validating Records & Detecting Conflicts..." << endl;

            int duplicateShows = 0;
            for (int i = 0;i < showcount;i++)
            {
                for (int j = i + 1;j < showcount;j++)
                {
                    if (showid[i] == showid[j])
                    {
                        cout << "Duplicate Show ID found: " << showid[i] << endl;
                        duplicateShows = 1;
                    }
                }
            }
            if (!duplicateShows) cout << "No duplicate Show IDs." << endl;

            int seatOverflow = 0;
            for (int i = 0;i < showcount;i++)
            {
                if (bookedseats[i] > totalseats[i])
                {
                    cout << "Show ID " << showid[i] << " has booked seats (" << bookedseats[i]
                        << ") exceeding total seats (" << totalseats[i] << ")" << endl;
                    seatOverflow = 1;
                }
            }
            if (!seatOverflow) cout << "No shows exceed total seats." << endl;

            int conflicts = 0;
            for (int i = 0;i < showcount;i++)
            {
                int sid = showid[i];

                for (int b1 = 0;b1 < bookingcount;b1++)
                {
                    if (bookingshowid[b1] != sid) continue;

                    int base1 = b1 * perBookingMaxSeats;
                    for (int k1 = 0;k1 < ticketcount[b1];k1++)
                    {
                        int seat1 = seatnumbers[base1 + k1];

                        for (int b2 = b1 + 1;b2 < bookingcount;b2++)
                        {
                            if (bookingshowid[b2] != sid) continue;

                            int base2 = b2 * perBookingMaxSeats;
                            for (int k2 = 0;k2 < ticketcount[b2];k2++)
                            {
                                int seat2 = seatnumbers[base2 + k2];
                                if (seat1 == seat2)
                                {
                                    cout << "Seat conflict detected in Show ID "
                                        << sid << " for seat " << seat1 << endl;
                                    conflicts = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (!conflicts) cout << "No seat conflicts detected." << endl;
        }
        else if (choice == 9)
        {
            if (bookingcount == 0)
            {
                cout << "No bookings available" << endl;
            }
            else
            {
                cout << "Booking Reports:" << endl;
                for (int i = 0; i < bookingcount; i++)
                {
                    cout << "Booking ID: " << bookingid[i] << endl;
                    cout << "Show ID: " << bookingshowid[i] << endl;

                    if (i == 0) cout << "Customer Name: " << customer0 << endl;
                    else if (i == 1) cout << "Customer Name: " << customer1 << endl;
                    else if (i == 2) cout << "Customer Name: " << customer2 << endl;
                    else if (i == 3) cout << "Customer Name: " << customer3 << endl;
                    else if (i == 4) cout << "Customer Name: " << customer4 << endl;
                    else if (i == 5) cout << "Customer Name: " << customer5 << endl;
                    else if (i == 6) cout << "Customer Name: " << customer6 << endl;
                    else if (i == 7) cout << "Customer Name: " << customer7 << endl;
                    else if (i == 8) cout << "Customer Name: " << customer8 << endl;
                    else if (i == 9) cout << "Customer Name: " << customer9 << endl;
                    else if (i == 10) cout << "Customer Name: " << customer10 << endl;
                    else if (i == 11) cout << "Customer Name: " << customer11 << endl;
                    else if (i == 12) cout << "Customer Name: " << customer12 << endl;
                    else if (i == 13) cout << "Customer Name: " << customer13 << endl;
                    else if (i == 14) cout << "Customer Name: " << customer14 << endl;
                    else if (i == 15) cout << "Customer Name: " << customer15 << endl;
                    else if (i == 16) cout << "Customer Name: " << customer16 << endl;
                    else if (i == 17) cout << "Customer Name: " << customer17 << endl;
                    else if (i == 18) cout << "Customer Name: " << customer18 << endl;
                    else if (i == 19) cout << "Customer Name: " << customer19 << endl;
                    else if (i == 20) cout << "Customer Name: " << customer20 << endl;
                    else if (i == 21) cout << "Customer Name: " << customer21 << endl;
                    else if (i == 22) cout << "Customer Name: " << customer22 << endl;
                    else if (i == 23) cout << "Customer Name: " << customer23 << endl;
                    else if (i == 24) cout << "Customer Name: " << customer24 << endl;
                    else if (i == 25) cout << "Customer Name: " << customer25 << endl;
                    else if (i == 26) cout << "Customer Name: " << customer26 << endl;
                    else if (i == 27) cout << "Customer Name: " << customer27 << endl;
                    else if (i == 28) cout << "Customer Name: " << customer28 << endl;
                    else if (i == 29) cout << "Customer Name: " << customer29 << endl;
                    else if (i == 30) cout << "Customer Name: " << customer30 << endl;
                    else if (i == 31) cout << "Customer Name: " << customer31 << endl;
                    else if (i == 32) cout << "Customer Name: " << customer32 << endl;
                    else if (i == 33) cout << "Customer Name: " << customer33 << endl;
                    else if (i == 34) cout << "Customer Name: " << customer34 << endl;
                    else if (i == 35) cout << "Customer Name: " << customer35 << endl;
                    else if (i == 36) cout << "Customer Name: " << customer36 << endl;
                    else if (i == 37) cout << "Customer Name: " << customer37 << endl;
                    else if (i == 38) cout << "Customer Name: " << customer38 << endl;
                    else if (i == 39) cout << "Customer Name: " << customer39 << endl;
                    else if (i == 40) cout << "Customer Name: " << customer40 << endl;
                    else if (i == 41) cout << "Customer Name: " << customer41 << endl;
                    else if (i == 42) cout << "Customer Name: " << customer42 << endl;
                    else if (i == 43) cout << "Customer Name: " << customer43 << endl;
                    else if (i == 44) cout << "Customer Name: " << customer44 << endl;
                    else if (i == 45) cout << "Customer Name: " << customer45 << endl;
                    else if (i == 46) cout << "Customer Name: " << customer46 << endl;
                    else if (i == 47) cout << "Customer Name: " << customer47 << endl;
                    else if (i == 48) cout << "Customer Name: " << customer48 << endl;
                    else if (i == 49) cout << "Customer Name: " << customer49 << endl;

                    if (i == 0) cout << "Customer Mobile: " << customermobile0 << endl;
                    else if (i == 1) cout << "Customer Mobile: " << customermobile1 << endl;
                    else if (i == 2) cout << "Customer Mobile: " << customermobile2 << endl;
                    else if (i == 3) cout << "Customer Mobile: " << customermobile3 << endl;
                    else if (i == 4) cout << "Customer Mobile: " << customermobile4 << endl;
                    else if (i == 5) cout << "Customer Mobile: " << customermobile5 << endl;
                    else if (i == 6) cout << "Customer Mobile: " << customermobile6 << endl;
                    else if (i == 7) cout << "Customer Mobile: " << customermobile7 << endl;
                    else if (i == 8) cout << "Customer Mobile: " << customermobile8 << endl;
                    else if (i == 9) cout << "Customer Mobile: " << customermobile9 << endl;
                    else if (i == 10) cout << "Customer Mobile: " << customermobile10 << endl;
                    else if (i == 11) cout << "Customer Mobile: " << customermobile11 << endl;
                    else if (i == 12) cout << "Customer Mobile: " << customermobile12 << endl;
                    else if (i == 13) cout << "Customer Mobile: " << customermobile13 << endl;
                    else if (i == 14) cout << "Customer Mobile: " << customermobile14 << endl;
                    else if (i == 15) cout << "Customer Mobile: " << customermobile15 << endl;
                    else if (i == 16) cout << "Customer Mobile: " << customermobile16 << endl;
                    else if (i == 17) cout << "Customer Mobile: " << customermobile17 << endl;
                    else if (i == 18) cout << "Customer Mobile: " << customermobile18 << endl;
                    else if (i == 19) cout << "Customer Mobile: " << customermobile19 << endl;
                    else if (i == 20) cout << "Customer Mobile: " << customermobile20 << endl;
                    else if (i == 21) cout << "Customer Mobile: " << customermobile21 << endl;
                    else if (i == 22) cout << "Customer Mobile: " << customermobile22 << endl;
                    else if (i == 23) cout << "Customer Mobile: " << customermobile23 << endl;
                    else if (i == 24) cout << "Customer Mobile: " << customermobile24 << endl;
                    else if (i == 25) cout << "Customer Mobile: " << customermobile25 << endl;
                    else if (i == 26) cout << "Customer Mobile: " << customermobile26 << endl;
                    else if (i == 27) cout << "Customer Mobile: " << customermobile27 << endl;
                    else if (i == 28) cout << "Customer Mobile: " << customermobile28 << endl;
                    else if (i == 29) cout << "Customer Mobile: " << customermobile29 << endl;
                    else if (i == 30) cout << "Customer Mobile: " << customermobile30 << endl;
                    else if (i == 31) cout << "Customer Mobile: " << customermobile31 << endl;
                    else if (i == 32) cout << "Customer Mobile: " << customermobile32 << endl;
                    else if (i == 33) cout << "Customer Mobile: " << customermobile33 << endl;
                    else if (i == 34) cout << "Customer Mobile: " << customermobile34 << endl;
                    else if (i == 35) cout << "Customer Mobile: " << customermobile35 << endl;
                    else if (i == 36) cout << "Customer Mobile: " << customermobile36 << endl;
                    else if (i == 37) cout << "Customer Mobile: " << customermobile37 << endl;
                    else if (i == 38) cout << "Customer Mobile: " << customermobile38 << endl;
                    else if (i == 39) cout << "Customer Mobile: " << customermobile39 << endl;
                    else if (i == 40) cout << "Customer Mobile: " << customermobile40 << endl;
                    else if (i == 41) cout << "Customer Mobile: " << customermobile41 << endl;
                    else if (i == 42) cout << "Customer Mobile: " << customermobile42 << endl;
                    else if (i == 43) cout << "Customer Mobile: " << customermobile43 << endl;
                    else if (i == 44) cout << "Customer Mobile: " << customermobile44 << endl;
                    else if (i == 45) cout << "Customer Mobile: " << customermobile45 << endl;
                    else if (i == 46) cout << "Customer Mobile: " << customermobile46 << endl;
                    else if (i == 47) cout << "Customer Mobile: " << customermobile47 << endl;
                    else if (i == 48) cout << "Customer Mobile: " << customermobile48 << endl;
                    else if (i == 49) cout << "Customer Mobile: " << customermobile49 << endl;

                    cout << "Number of Tickets: " << ticketcount[i] << endl;
                    cout << "Bill Amount: " << billamount[i] << endl;
                    cout << "*******************************" << endl;
                }
            }
        }

        else if (choice == 0) cout << "Exiting program"<< endl;
        else cout << "Invalid choice" << endl;

    }while (choice != 0);

    return 0;
}