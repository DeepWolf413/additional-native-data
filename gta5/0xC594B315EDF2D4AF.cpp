// gb_casino_heist.ysc @ L467970
void func_8433(int iParam0, int iParam1)
{
  int iVar0;
  
  if (!func_8435())
  {
    return;
  }
  if (func_993(iParam1))
  {
    if (func_8434(iParam0, iParam1))
    {
      if (!PED::GET_PED_CONFIG_FLAG(iParam1, 272, true) && func_1029(Local_4279.f_106[iParam0 /*24*/]))
      {
        iVar0 = HUD::GET_BLIP_FROM_ENTITY(NETWORK::NET_TO_PED(Local_4279.f_106[iParam0 /*24*/]));
        if (HUD::DOES_BLIP_EXIST(iVar0) && HUD::GET_BLIP_INFO_ID_TYPE(iVar0) == 9)
        {
          HUD::_0xC594B315EDF2D4AF(iParam1);
        }
        PED::SET_PED_CONFIG_FLAG(iParam1, 272, true);
      }
    }
    else if (PED::GET_PED_CONFIG_FLAG(iParam1, 272, true) && func_1029(Local_4279.f_106[iParam0 /*24*/]))
    {
      PED::SET_PED_CONFIG_FLAG(iParam1, 272, false);
    }
  }
}