// am_mp_armory_truck.ysc @ L324934
void func_5111()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 8)
  {
    if (Local_3143[iVar0 /*5*/] != 0)
    {
      NETWORK::TEXTURE_DOWNLOAD_RELEASE(Local_3143[iVar0 /*5*/]);
    }
    iVar0++;
  }
  MISC::CLEAR_BIT(&(Local_2678.f_3), 7);
}