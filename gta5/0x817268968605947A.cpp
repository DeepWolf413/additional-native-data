// agency_heist3a.ysc @ L122563
void func_871()
{
  int iVar0;
  
  func_872();
  if (INTERIOR::IS_VALID_INTERIOR(iLocal_5077))
  {
    INTERIOR::UNPIN_INTERIOR(iLocal_5077);
  }
  TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("AssAfterLift");
  PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
  PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
  PLAYER::SET_MAX_WANTED_LEVEL(6);
  PED::SET_CREATE_RANDOM_COPS(true);
  PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
  ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
  ENTITY::SET_ENTITY_PROOFS(iLocal_5084[0], false, false, false, false, false, false, false, false);
  ENTITY::SET_ENTITY_PROOFS(Local_1019[0 /*32*/], false, false, false, false, false, false, false, false);
  if (ENTITY::DOES_ENTITY_EXIST(Local_1019[1 /*32*/]))
  {
    ENTITY::SET_ENTITY_PROOFS(Local_1019[1 /*32*/], false, false, false, false, false, false, false, false);
  }
  iVar0 = 0;
  while (iVar0 <= (Local_1343 - 1))
  {
    Local_1343[iVar0 /*32*/].f_24 = 0;
    iLocal_4809[iVar0] = 0;
    iVar0++;
  }
  AUDIO::START_AUDIO_SCENE("AH_3A_GET_TO_FIRETRUCK");
}