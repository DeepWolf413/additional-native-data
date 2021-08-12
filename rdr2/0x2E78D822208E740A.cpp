// industry3.ysc @ L39984
bool func_878(var uParam0)
{
  func_1386();
  PED::_0x411189E51B8020BA(Local_1571[0 /*10*/], "Cautious");
  PED::SET_PED_USING_ACTION_MODE(Local_1571[0 /*10*/], false, -1, 0);
  PED::_0x411189E51B8020BA(Local_1571[0 /*10*/], "Cautious");
  PED::SET_PED_USING_ACTION_MODE(Local_1571[0 /*10*/], false, -1, 0);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1571[1 /*10*/], true);
  PED::_0xFD6943B6DF77E449(Local_1571[1 /*10*/], true);
  PED::SET_PED_CONFIG_FLAG(Local_1571[1 /*10*/], 246, false);
  PED::SET_PED_CONFIG_FLAG(Local_1571[1 /*10*/], 252, false);
  if (PLAYER::_0x2E78D822208E740A(PLAYER::PLAYER_ID()) != 1f)
  {
    PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
  }
  CAM::_0x8370D34BD2E60B73();
  CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_1767) && ENTITY::IS_ENTITY_ATTACHED(iLocal_1767))
  {
    ENTITY::DETACH_ENTITY(iLocal_1767, true, true);
  }
  return uParam0->f_607 == uParam0->f_607;
}