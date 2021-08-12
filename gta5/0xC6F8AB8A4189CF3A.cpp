// maintransition.ysc @ L332418
int func_4177()
{
  func_3732(func_4339());
  NETWORK::NETWORK_SESSION_JOIN_INVITE();
  if (func_4178() == 0)
  {
    Global_77248 = 1;
    func_572(func_4339());
    func_4302(999);
    switch (func_4397())
    {
      case 0:
        func_4340(19);
        break;
      }
  }
  return 0;
}