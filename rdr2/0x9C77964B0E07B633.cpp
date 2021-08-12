// long_update.ysc @ L56959
bool func_1768(int iParam0, float fParam1)
{
  vector3 vVar0;
  var uVar3;

  if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
  {
    return false;
  }
  if (!STREAMING::_GET_IMAP_POSITION_AND_HEADING(iParam0, &vVar0, &uVar3))
  {
    return false;
  }
  if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vVar0) <= fParam1)
  {
    return true;
  }
  return false;
}