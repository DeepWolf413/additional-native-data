// beat_inbred_kidnap.ysc @ L1649
void func_23(bool bParam0)
{
  if (bLocal_992 != bParam0)
  {
    if (!ENTITY::IS_ENTITY_DEAD(uLocal_873[4]))
    {
      if (bParam0)
      {
        PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_873[4], joaat("REL_PLAYER_LIKE"));
        PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uLocal_873[4], joaat("REL_PLAYER_LIKE"));
      }
      else
      {
        PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_873[4], joaat("REL_CIVFEMALE"));
        PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uLocal_873[4], joaat("REL_CIVFEMALE"));
      }
    }
    bLocal_992 = bParam0;
  }
}