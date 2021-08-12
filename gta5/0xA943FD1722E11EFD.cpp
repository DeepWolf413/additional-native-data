// gb_biker_wheelie_rider.ysc @ L16203
int func_506()
{
  int iVar0;
  
  iVar0 = SYSTEM::ROUND((STATS::_0xA943FD1722E11EFD() * 10f));
  if ((iLocal_476 > 0 && iVar0 == 0) && !func_8(&uLocal_473, 2000, 0))
  {
    iVar0 = iLocal_476;
    func_686(6);
  }
  else
  {
    iLocal_476 = iVar0;
    func_47(&uLocal_473);
    func_507(6);
  }
  return iVar0;
}