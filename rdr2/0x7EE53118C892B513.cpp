// abigail2_1.ysc @ L36589
void func_855(char[4] cParam0, bool bParam1)
{
  if (!ENTITY::IS_ENTITY_DEAD(cParam0->f_5411))
  {
    if (!ENTITY::_0x88AD6CC10D8D35B2(cParam0->f_5411))
    {
      ENTITY::SET_ENTITY_AS_MISSION_ENTITY(cParam0->f_5411, true, true);
    }
    if ((bParam1 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(cParam0->f_5411, -1)) && !func_120(cParam0, 32768))
    {
      TASK::CLEAR_PED_TASKS(cParam0->f_5411, true, false);
    }
    if (!func_20() == 0)
    {
      PED::SET_PED_RELATIONSHIP_GROUP_HASH(cParam0->f_5411, joaat("REL_GANG_DUTCHS"));
    }
    else
    {
      PED::SET_PED_RELATIONSHIP_GROUP_HASH(cParam0->f_5411, PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(PLAYER::PLAYER_PED_ID()));
      ENTITY::SET_ENTITY_CAN_BE_DAMAGED(cParam0->f_5411, false);
    }
    if (PED::GET_PED_CONFIG_FLAG(cParam0->f_5411, 136, true))
    {
      PED::SET_PED_CONFIG_FLAG(cParam0->f_5411, 136, false);
    }
  }
}