// golf.ysc @ L119953
int func_1201(struct<3> Param0, float fParam3)
{
  int iVar0;
  
  if (func_989(Param0, 0f, 0f, 0f, 1056964608, 0))
  {
    return 0;
  }
  iVar0 = OBJECT::CREATE_OBJECT(joaat("prop_golf_ball"), Param0, true, true, false);
  OBJECT::_0xC6033D32241F6FB5(iVar0, true);
  ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, false);
  ENTITY::SET_ENTITY_HEADING(iVar0, fParam3);
  if (bLocal_45)
  {
  }
  return iVar0;
}