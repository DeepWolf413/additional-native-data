// abigail2_1.ysc @ L83180
bool func_2486(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
  vector3 vVar0;
  var uVar3;

  if (!func_427(iParam0))
  {
    return false;
  }
  if (!func_2545(iParam0, iParam5, &vVar0))
  {
    return false;
  }
  *uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
  if (iParam7 == 1)
  {
    if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + Vector(0.1f, 0f, 0f), &uVar3, false))
    {
      uParam6->f_2 = uVar3;
    }
  }
  return true;
}