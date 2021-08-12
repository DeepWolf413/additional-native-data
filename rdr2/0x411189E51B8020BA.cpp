// act_bankrobbery01.ysc @ L21995
void func_583(int iParam0, bool bParam1)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  else if (ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return;
  }
  if (bParam1)
  {
    if (PED::_GET_PED_BLACKBOARD_FLOAT(iParam0, "Stealth") != 1f)
    {
      PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, "Stealth", 1f, -1);
    }
  }
  else if (PED::_GET_PED_BLACKBOARD_FLOAT(iParam0, "Stealth") > 0f)
  {
    PED::_0x411189E51B8020BA(iParam0, "Stealth");
  }
}