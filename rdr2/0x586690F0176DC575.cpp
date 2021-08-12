// act_caunc_rustling.ysc @ L43581
bool func_1170(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4)
{
  vector3 vVar0;
  vector3 vVar3;
  float fVar6;
  float fVar7;

  vVar0 = { *uParam4 - ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
  vVar0 = { func_700(vVar0) };
  vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam2, false, false) - ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
  vVar3 = { func_700(vVar3) };
  fVar6 = func_1144(vVar0, vVar3);
  if (fVar6 < 0.5f && func_221(iParam2, *uParam1, 1, 1) < 20f)
  {
    fVar7 = MISC::ACOS(fVar6);
    if ((fVar7 > uParam0->f_612 && func_221(iParam2, *uParam1, 1, 1) < 10.5f) || func_221(iParam2, *uParam1, 1, 1) < 2.5f)
    {
      return true;
    }
  }
  else if (func_221(iParam2, *uParam1, 1, 1) < 3f)
  {
    return true;
  }
  return false;
}