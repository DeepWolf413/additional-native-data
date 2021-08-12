// guama3.ysc @ L36687
int func_762(char[4] cParam0)
{
  func_440();
  bLocal_4816 = false;
  if (func_120(cParam0, 4))
  {
  }
  func_1(cParam0, 4);
  ENTITY::SET_ENTITY_INVINCIBLE(Local_121[1 /*49*/], false);
  ENTITY::FREEZE_ENTITY_POSITION(Local_121[1 /*49*/], false);
  ENTITY::SET_ENTITY_INVINCIBLE(Local_121[2 /*49*/], false);
  ENTITY::FREEZE_ENTITY_POSITION(Local_121[2 /*49*/], false);
  if (!PED::IS_PED_INJURED(Local_121[3 /*49*/]))
  {
    PED::CLEAR_PED_WETNESS(Local_121[3 /*49*/]);
    PED::CLEAR_PED_DECORATIONS(Local_121[3 /*49*/]);
    PED::CLEAR_PED_BLOOD_DAMAGE(Local_121[3 /*49*/]);
  }
  return 1;
}