// ambush_bnd_cliff1.ysc @ L9391
void func_360(vector3 vParam0, float fParam3, int iParam4)
{
  vector3 vVar0;
  vector3 vVar3;
  vector3 vVar6;
  vector3 vVar9;

  vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
  vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
  vVar6 = { func_358(vVar0, vVar3, 0f) };
  vVar9 = { func_359(vVar0, vVar3, 0f) };
  if (iParam4 == 5)
  {
    PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
  }
  else
  {
    PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
  }
}