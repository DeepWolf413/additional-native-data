// barry3a.ysc @ L44513
void func_370(int iParam0, int iParam1)
{
  if (!iLocal_428)
  {
    iLocal_428 = 1;
    iLocal_427 = MISC::GET_GAME_TIMER();
  }
  if (func_204(Local_186[iParam0 /*29*/].f_1))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_186[iParam0 /*29*/].f_1, false);
    PED::SET_PED_HIGHLY_PERCEPTIVE(Local_186[iParam0 /*29*/].f_1, true);
    func_368(&(Local_186[iParam0 /*29*/].f_1), 1, 0, 1);
  }
  if (func_204(Local_186[iParam0 /*29*/].f_2))
  {
    PED::SET_PED_AS_COP(Local_186[iParam0 /*29*/].f_2, true);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_186[iParam0 /*29*/].f_2, false);
    PED::SET_PED_HIGHLY_PERCEPTIVE(Local_186[iParam0 /*29*/].f_2, true);
    func_368(&(Local_186[iParam0 /*29*/].f_2), 1, 0, 1);
  }
  if (iParam1 && func_204(Local_186[iParam0 /*29*/]))
  {
    VEHICLE::SET_VEHICLE_ENGINE_ON(Local_186[iParam0 /*29*/], true, true, false);
    func_371(&(Local_186[iParam0 /*29*/]));
  }
  if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
  {
    PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
    PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
  }
  PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
  Local_186[iParam0 /*29*/].f_24 = 3;
}