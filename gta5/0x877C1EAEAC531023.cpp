// business_battles_sell.ysc @ L350042
void func_5771(int iParam0, bool bParam1, bool bParam2)
{
  int iVar0;
  
  if (func_5773(func_613(iParam0, func_6471(), func_35())) && func_5772())
  {
    if (!func_47(iParam0, 2) && !func_501(NETWORK::PARTICIPANT_ID(), iParam0, 2))
    {
      if (bParam1 && bParam2)
      {
        iVar0 = NETWORK::NET_TO_VEH(Local_2316.f_807[iParam0 /*11*/]);
        if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iVar0))
        {
          if (func_5320(Local_2316.f_807[iParam0 /*11*/]))
          {
            VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(iVar0, 5f, 5f, false);
            func_5748(iParam0, 2);
          }
        }
      }
    }
  }
}