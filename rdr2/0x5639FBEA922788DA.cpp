// braithwaites1.ysc @ L18425
void func_191(bool bParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(Global_35))
  {
    AITRANSPORT::_0x5639FBEA922788DA(Global_35);
  }
  if (!ENTITY::IS_ENTITY_DEAD(Local_218[6 /*8*/]))
  {
    AITRANSPORT::_0x5639FBEA922788DA(Local_218[6 /*8*/]);
    PED::SET_PED_CONFIG_FLAG(Local_218[6 /*8*/], 65, false);
  }
  if (bParam0)
  {
    if (!ENTITY::IS_ENTITY_DEAD(iLocal_979[0]))
    {
      if (!ENTITY::IS_ENTITY_DEAD(Global_35))
      {
        AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_979[0], 0, 16, -1);
      }
      if (!ENTITY::IS_ENTITY_DEAD(Local_218[6 /*8*/]))
      {
        PED::SET_PED_CONFIG_FLAG(Local_218[6 /*8*/], 65, true);
        AITRANSPORT::_0xB7079F4C72896756(Local_218[6 /*8*/], iLocal_979[0], 1, 16, 0);
      }
    }
  }
}