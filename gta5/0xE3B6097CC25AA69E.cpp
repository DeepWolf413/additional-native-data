// barry1.ysc @ L45436
int func_447(var uParam0)
{
  if (uParam0->f_1 != 7)
  {
    return 0;
  }
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2, false))
  {
    return 0;
  }
  if (!func_448(ENTITY::GET_ENTITY_VELOCITY(uParam0->f_2), 0f, 0f, 0f, 0.125f, 0))
  {
    if (iLocal_184 == 1)
    {
    }
    return 0;
  }
  if (PED::IS_PED_RAGDOLL(uParam0->f_2) || PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam0->f_2))
  {
    return 0;
  }
  return 1;
}