// trainrobbery_ambient.ysc @ L3493
bool func_126()
{
  var uVar0;

  if (!func_1(Local_718) && Local_718 != 14)
  {
    return false;
  }
  if (Local_718 == 14)
  {
    uVar0 = VEHICLE::_0x45853F4E17D847D5(Local_718.f_1[0 /*22*/]);
  }
  else
  {
    uVar0 = Global_1425371[Local_718 /*373*/].f_1;
  }
  if (!VEHICLE::_0x0516FAE561276EFC(uVar0))
  {
    return false;
  }
  return !VEHICLE::_0x37D238BE69F7378A(uVar0);
}