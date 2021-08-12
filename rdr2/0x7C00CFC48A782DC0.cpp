// abigail2_1.ysc @ L80259
void func_2364(var uParam0)
{
  vector3 vVar0;
  vector3 vVar3;
  vector3 vVar6;

  func_170(uParam0->f_2265);
  MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Global_35), &vVar0, &vVar3);
  vVar0.x = (vVar0.x * 0.35f);
  vVar3.x = (vVar3.x * 0.35f);
  vVar6 = { vVar3 - vVar0 };
  vVar6 = { vVar6 * Vector(0.5f, 0.5f, 0.5f) };
  uParam0->f_2265 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, vVar6);
  if (!Global_1935630.f_12)
  {
    PED::_0x7C00CFC48A782DC0(uParam0->f_2265, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
  }
  func_1378(uParam0, 1048576);
  func_1378(uParam0, 2097152);
}