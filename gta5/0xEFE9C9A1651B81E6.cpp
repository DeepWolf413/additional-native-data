// gb_casino.ysc @ L392019
void func_6573()
{
  int iVar0;
  var uVar1;
  
  switch (func_8013())
  {
    case 0:
      if (func_8270(140))
      {
        return;
      }
      iVar0 = 500;
      if (iVar0 > 0)
      {
        if (func_809())
        {
          func_1529(-31156877, iVar0, &uVar1, 0, 0, 0);
        }
        else
        {
          func_6574(iVar0, 0);
          MONEY::_NETWORK_EARN_FROM_CASHING_OUT(iVar0);
        }
      }
      func_8271(140);
      break;
  }
}