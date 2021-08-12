// player_horse.ysc @ L11382
int func_342(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
  int iVar0;

  if (!PED::_IS_THIS_MODEL_A_HORSE(iParam0))
  {
    return 0;
  }
  iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return 0;
  }
  ENTITY::_0x9587913B9E772D29(iVar0, 0);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam0));
  return iVar0;
}