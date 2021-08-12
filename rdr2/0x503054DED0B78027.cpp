// ambush_inb_forest.ysc @ L24808
void func_890(vector3 vParam0)
{
  vector3 vVar0;
  float fVar3;

  if (!Global_1935630.f_12)
  {
    vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
    fVar3 = MISC::ATAN((vVar0.z / BUILTIN::SQRT(((vVar0.y * vVar0.y) + (vVar0.x * vVar0.x)))));
    CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar3, 1f);
  }
}