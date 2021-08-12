// beat_arms_deal.ysc @ L4685
void func_133(int iParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
  {
    PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_35[iParam0], "Default_Curious");
    PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_35[iParam0], "Default_Shocked");
    PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_35[iParam0], "Default_Angry");
    if (func_53(iParam0) && iLocal_14 == 1)
    {
      PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_35[iParam0], "Default_Panic");
    }
  }
}