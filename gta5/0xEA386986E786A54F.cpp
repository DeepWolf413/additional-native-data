// agency_heist1.ysc @ L100719
void func_524(int iParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 9)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Global_96701[iVar0]))
    {
      if (iParam0 == 145 || Global_96711[iVar0] == iParam0)
      {
        if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_96701[iVar0]) == func_525(iParam0, iParam1))
        {
          if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96701[iVar0], false))
          {
            ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96701[iVar0], false, true);
            VEHICLE::DELETE_VEHICLE(&(Global_96701[iVar0]));
            Global_96711[iVar0] = 145;
          }
        }
      }
    }
    iVar0++;
  }
}