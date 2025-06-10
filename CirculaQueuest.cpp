
#include <iostream>
using namespace std;

class Queues {
    int FRONT, REAR, max = 5;
    int queue_arry[5];

public:
Queues() {
    FRONT = -1;
    REAR = -1;

}
 void insert() {
    int num;
    cour << "Enter a number: ";
    cin >> num;
    cout << endl;

    // cek apakah antrina penuh
    if ((FRONT == 0 && REAR == max - 1) || FRONT == REAR + 1) {
        cout << "\nQueue overflow\n";
        
    }
   
    
        }
        else {
            // jika REAR berada di posisi terakhir arry, kembali ke awal arry 
            if (REAR == max - 1) {
                FRONT = 0;
                else 
                FRONT = FRONT + 1;

            }
        }
 
  }

  
    // cek apakah antrina kosong 
    if (FRONT == -1){
        cout << "Queue is empty\n";
        return;
    }
    cout << "\nElements in the queue are...\n";
    // Jika FRONT_position <= REAR_position, literasi dari FRONT ke REAR
    if (FRONT_position <= REAR_position)
    {
        while (FRONT_position <= REAR_position) {
            cout << queue_arry[FRONT_position] << " ";
            FRONT_position++;
        }
        cout << endl;
    }
    else {
        // jika FRONT_position > REAR_position, literasi dari FRONT  hingga ahir arry
        while (FRONT_position <= max -1)
        {
            cout << queue_arry[FRONT_position] << " ";
            FRONT_position++;

        }
    }

    
            try {
                 cout << "Menu" << endl;
                 cout << "1. implement insert operation" << endl;
                 cout << "2. implemen delete operation" << endl;
                 cout << "3. display values" << endl;
                 cout << "4. exit" << endl;
                 cin >> ch;
                 cout << endl;
                 switch (ch) {
                    case '1':
                        q.insert();
                        break;
                    {   case '2':
                        q.remove();
                        break;
                    }
                    {
                        case '3':
                        q.display();
                        break;
                    }
                    {
                        case '4':
                        return 0;
                    }
                    default:
                        cout << "Invalid option!!" << endl;
                        break;


                 }
                 catch (exception & e)
                 {
                    cout << "Check fo the values entered" << endl;

                 }
            }
        }
    }

  }

   
    
 
