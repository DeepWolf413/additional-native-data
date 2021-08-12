// fm_content_island_heist.ysc @ L171628
void func_3576(int iParam0, int iParam1)
{
  switch (iParam0)
  {
    case 2:
      if (func_11(func_98(), 0, 1))
      {
        VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(iParam1, PLAYER::GET_PLAYER_PED(func_98()), 0);
      }
      VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam1, 14.9f);
      break;
    
    case 0:
    case 1:
      func_1500(iParam1, 0, 0, 1, 5, 1065353216);
      NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_12697.f_795[iParam0 /*6*/], false, false);
      break;
    
    case 7:
      func_1500(iParam1, 0, 0, 1, 5, 1065353216);
      break;
    
    default:
      VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam1, 14.9f);
      break;
  }
}