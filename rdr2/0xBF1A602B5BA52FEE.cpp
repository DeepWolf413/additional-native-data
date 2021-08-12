// ambush_bnd_cliff1.ysc @ L9624
void func_375(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
  vector3 vVar0;
  vector3 vVar3;
  vector3 vVar6;
  vector3 vVar9;

  vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
  vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
  vVar6 = { func_358(vVar0, vVar3, 0f) };
  vVar9 = { func_359(vVar0, vVar3, 0f) };
  if (iParam4 == 1)
  {
    PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
  }
  else if (iParam6 == 5)
  {
    PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
  }
  else
  {
    PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
  }
}