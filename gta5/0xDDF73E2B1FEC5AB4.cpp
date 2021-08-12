// am_mp_defunct_base.ysc @ L308669
void func_4981()
{
  bool bVar0;
  bool bVar1;
  
  bVar0 = false;
  while (bVar0 < 32)
  {
    bVar1 = bVar0;
    if (bVar1 != func_73())
    {
      if (func_24(bVar1, 0, 1))
      {
        NETWORK::NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(bVar0, false);
      }
    }
    bVar0++;
  }
}