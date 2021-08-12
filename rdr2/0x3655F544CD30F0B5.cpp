// gang2.ysc @ L73312
float func_1909()
{
  int iVar0;
  vector3 vVar1;
  vector3 vVar4;

  iVar0 = PHYSICS::GET_ROPE_VERTEX_COUNT(Local_524.f_136);
  vVar1 = { PHYSICS::GET_ROPE_VERTEX_COORD(Local_524.f_136, BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar0) / 2f))) };
  vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_315[1], vVar1) };
  return MISC::ABSF(vVar4.y);
}