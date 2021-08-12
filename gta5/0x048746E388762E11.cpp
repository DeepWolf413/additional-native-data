// act_cinema.ysc @ L114758
void func_1105()
{
  int iVar0;
  
  if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
  {
    if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
    {
      iVar0 = 0;
      while (iVar0 < 8)
      {
        Global_2359302.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
        iVar0++;
      }
      MISC::SET_BIT(&(Global_2359302.f_67), 2);
      MISC::SET_BIT(&(Global_2359302.f_67), false);
    }
  }
}