// fbi4_prep2.ysc @ L4609
int func_146(int iParam0, int iParam1)
{
  switch (iLocal_97[iParam0])
  {
    case 0:
      PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(-632.498f, -2424.908f, 1710.123f, -1791.79f);
      if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(-632.498f, -2424.908f, 1710.123f, -1791.79f))
      {
        TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam1, PED::GET_VEHICLE_PED_IS_IN(iParam1, false), Local_224, 4, 20f, 786469, 2f, 10f, true);
        iLocal_97[iParam0] = 5;
      }
      break;
    
    case 5:
      if (!func_150(iParam0, iParam1) || func_95(PLAYER::PLAYER_PED_ID(), Local_224, 1.5f))
      {
        iLocal_97[iParam0] = 6;
      }
      break;
    
    case 6:
      return 1;
      break;
  }
  return 0;
}