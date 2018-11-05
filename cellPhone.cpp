#include <iostream>
using namespace std;

class cellPhone {
  protected:
  float screen_size;
  float weight;
  int inbuiltMemory;

  public:
  void sendMMS() {
    cout<<"you are sending MMS"<<endl;
  }
  void sendSMS() {
    cout<<"you are sending SMS"<<endl;
  }
  void phoneCall() {
    cout<<"you are Doing phone call"<<endl;
  }
  void removeBattery() {
    cout<<"you are removing battery"<<endl;
  }
  void bluetooth() {
    cout<<"turn on bluetooth"<<endl;
    cout<<"now you can share your data"<<endl;
  }
};

class samsung: public cellPhone {
  float version;
  int camera = 13;

  public:
  void details() {
    screen_size = 4.2;
    weight = 100;
    inbuiltMemory = 16;
    version = 10.1;

    cout<<"****Samsung J7 pro****"<<endl;
    cout<<"Andrid version :8.0"<<endl;
    cout<<"screen size :"<<screen_size<<" inch"<<endl;
    cout<<"weight :"<<weight<<" gram"<<endl;
    cout<<"inbuilt Memory :"<<inbuiltMemory<<" GB"<<endl;
    cout<<"version :"<<version<<endl;
    cout<<"camera is :"<<camera<<" MP"<<endl;
    cout<<endl;
  }
  void fileManager() {
    cout<<"you are in file manager"<<endl;
  }
  void multiUserMode() {
    cout<<"you are using multi user mode"<<endl;
  }
};

class iosApple: public cellPhone {
  float iosVersion;
  int camera;

  public:
  void details() {
    screen_size = 6.5;
    weight = 155;
    inbuiltMemory = 64;
    iosVersion= 11;
    camera = 12;

    cout<<"**** iPhone xs ****"<<endl;
    cout<<"ios version : "<<iosVersion<<endl;
    cout<<"screen size :"<<screen_size<<" inch"<<endl;
    cout<<"weight :"<<weight<<" gram"<<endl;
    cout<<"inbuilt Memory :"<<inbuiltMemory<<" GB"<<endl;
    cout<<"camera is :"<<camera<<" MP"<<endl;
    cout<<endl;
  }
  void nativeScreenRecording() {
    cout<<"you are using native Screen Recording"<<endl;
  }
  void listenMusicOnMultipleSpeaker() {
    cout<<"you are listenning Multiple Speaker"<<endl;
  }
  void spamMessageFilter() {
    cout<<"you are using spam Message Filter"<<endl;
  }
  void bluetooth() {
    cout<<"Bluetooth feature is not available"<<endl;
  }
};

class moto: public cellPhone {
  int camera = 16;

  public:
  void details() {
    screen_size = 6.2;
    weight = 177;
    inbuiltMemory = 64;

    cout<<"****MOTO G5+****"<<endl;
    cout<<"Andrid version :7.0"<<endl;
    cout<<"screen size :"<<screen_size<<" inch"<<endl;
    cout<<"weight :"<<weight<<" gram"<<endl;
    cout<<"inbuilt Memory :"<<inbuiltMemory<<" GB"<<endl;
    cout<<"camera is :"<<camera<<" MP"<<endl;
    cout<<endl;
  }
  void unlockWithSensor() {
    cout<<"you are unlocking screen with finger"<<endl;
  }
  void removeBattery() {
    cout<<"Battery is not removable"<<endl;
  }
  void multiTouch() {
    cout<<"You can use multiple touch feature"<<endl;
  }
};

class mi: public cellPhone {
  int camera = 12;

  public:
  void details() {
    screen_size = 5.12;
    weight = 182;
    inbuiltMemory = 64;

    cout<<"**** Redmi 6pro ****"<<endl;
    cout<<"Andrid version :7.0"<<endl;
    cout<<"screen size :"<<screen_size<<" inch"<<endl;
    cout<<"weight :"<<weight<<" gram"<<endl;
    cout<<"inbuilt Memory :"<<inbuiltMemory<<" GB"<<endl;
    cout<<"camera is :"<<camera<<" MP"<<endl;
    cout<<endl;
  }
  void removeBattery() {
    cout<<"Battery is not removable"<<endl;
  }
  void multiTouch() {
    cout<<"You can use multiple touch feature"<<endl;
  }
  void unlockWithSensor() {
    cout<<"you are unlocking screen with finger"<<endl;
  }
};

void mainMenu(int &choice) {
  cout<<"Enter your choice : "<<endl;
  cout<<"1 for samsung j7"<<endl;
  cout<<"2 for iPhone xs "<<endl;
  cout<<"3 for MOTO g5+"<<endl;
  cout<<"4 for Redmi 6pro "<<endl;
  cin>>choice;
}

int main() {
  int choice;
  do{
  samsung samsung;
  iosApple apple;
  moto moto;
  mi redmi;
  mainMenu(choice);

  switch(choice)
  {
    case 1:
    int choice1;
    do{
      cout<<"======================================="<<endl;
      cout<<endl;
      cout<<"which operation you want to do"<<endl;
      cout<<"1.details"<<endl;
      cout<<"2.send mms"<<endl;
      cout<<"3.send sms"<<endl;
      cout<<"4.make a phone call"<<endl;
      cout<<"5.use file manager"<<endl;
      cout<<"6.use multi user mode"<<endl;
      cout<<"7.Remove battery"<<endl;
      cout<<"8.Bluetooth"<<endl;
      cout<<endl;
      cin>>choice1;

    switch(choice1)
    {
      case 1:
      samsung.details();
      break;
      case 2:
      samsung.sendMMS();
      break;
      case 3:
      samsung.sendSMS();
      case 4:
      samsung.phoneCall();
      break;
      case 5:
      samsung.fileManager();
      break;
      case 6:
      samsung.multiUserMode();
      break;
      case 7:
      samsung.removeBattery();
      break;
      case 8:
      samsung.bluetooth();
      break;
      default: cout << "You've chosen neither"<<endl;
      break;
    }
    }while(choice1!=0);
    break;

    case 2:
    int choice2;
    do{
	cout<<"======================================="<<endl;
	cout<<endl;
	cout<<"which operation you want to perform : "<<endl;
	cout<<endl;
	cout<<"1.details"<<endl;
	cout<<"2.send mms"<<endl;
	cout<<"3.send sms"<<endl;
	cout<<"4.make a phone call"<<endl;
	cout<<"5.use using native Screen Recording"<<endl;
	cout<<"6.listen Music On Multiple Speaker "<<endl;
	cout<<"7.use spam Message Filter "<<endl;
	cout<<"8.Bluetooth"<<endl;
	cout<<endl;
	cin>>choice2;

    switch(choice2)
    {
      case 1:
      apple.details();
      break;
      case 2:
      apple.sendMMS();
      break;
      case 3:
      apple.sendSMS();
      break;
      case 4:
      apple.phoneCall();
      break;
      case 5:
      apple.nativeScreenRecording();
      break;
      case 6:
      apple.listenMusicOnMultipleSpeaker();
      break;
      case 7:
      apple.spamMessageFilter();
      break;
      case 8:
      apple.bluetooth();
      break;
      default: cout << "You've chosen neither"<<endl;
      break;
    }
    }while(choice2 != 0);
    break;

    case 3:
    int choice3;
    do{
	cout<<"======================================="<<endl;
      	cout<<endl;
      	cout<<"which operation you want to perform : "<<endl;
      	cout<<"1.details"<<endl;
      	cout<<"2.send mms"<<endl;
      	cout<<"3.send sms"<<endl;
      	cout<<"4.make a phone call"<<endl;
      	cout<<"5.Unlock ur phone with sensor"<<endl;
      	cout<<"6.use multi touch feature "<<endl;
      	cout<<"7.remove battery"<<endl;
      	cout<<"8.Bluetooth"<<endl;
      	cout<<endl;
      	cin>>choice3;

    switch(choice3)
    {
      case 1:
      moto.details();
      break;
      case 2:
      moto.sendMMS();
      break;
      case 3:
      moto.sendSMS();
      break;
      case 4:
      moto.phoneCall();
      break;
      case 5:
      moto.unlockWithSensor();
      break;
      case 6:
      moto.multiTouch();
      break;
      case 7:
      moto.removeBattery();
      break;
      case 8:
      moto.bluetooth();
      break;
      default: cout << "You've chosen neither"<<endl;
      break;
    }
    }while(choice3 != 0);
    break;

  case 4:
    int choice4;
    do{
	cout<<"======================================="<<endl;
	cout<<endl;
	cout<<"which operation you want to perform : "<<endl;
	cout<<"1.details"<<endl;
	cout<<"2.send mms"<<endl;
	cout<<"3.send sms"<<endl;
	cout<<"4.make a phone call"<<endl;
	cout<<"5.Unlock ur phone with sensor"<<endl;
	cout<<"6.use multi touch feature "<<endl;
	cout<<"7.remove battery"<<endl;
	cout<<"8.Bluetooth"<<endl;
	cout<<endl;
	cin>>choice4;

    switch(choice4)
    {
      case 1:
      redmi.details();
      break;
      case 2:
      redmi.sendMMS();
      break;
      case 3:
      redmi.sendSMS();
      break;
      case 4:
      redmi.phoneCall();
      break;
      case 5:
      redmi.unlockWithSensor();
      break;
      case 6:
      redmi.multiTouch();
      break;
      case 7:
      redmi.removeBattery();
      break;
      case 8:
      redmi.bluetooth();
      break;
      default: cout << "You've chosen neither"<<endl;
      break;
    }
    }while(choice4 != 0);
    break;
  }
  }while(choice != 0);
return 0;
}

