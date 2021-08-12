// fm_content_island_heist.ysc @ L130780
void func_2688(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
  switch (Local_792.f_891.f_1[iParam0 /*14*/].f_3)
  {
    case joaat("tug"):
      if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_12697.f_795[iParam0 /*6*/]) && func_808(Local_12697.f_795[iParam0 /*6*/]))
      {
        if (!func_180(iParam0, 18))
        {
          if (func_2637() == 3 && SYSTEM::VDIST(Local_12608, ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 50f)
          {
            AUDIO::_0x9D3AF56E94C9AE98(iParam1, 5000f);
            func_2516(iParam0, 12);
          }
        }
        else if (!func_719(20))
        {
          if (func_15(&(Local_275.f_8), 5000, 0))
          {
            AUDIO::SET_HORN_ENABLED(iParam1, false);
            func_717(20);
          }
        }
      }
      break;
  }
}