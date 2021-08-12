// beat_wealthy_couple.ysc @ L2775
void func_79()
{
  var uVar0;

  if (ENTITY::DOES_ENTITY_EXIST(iLocal_715))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iLocal_715))
    {
      if (func_227(func_65(iLocal_716, iLocal_714), 1f, &uVar0, 1))
      {
        TASK::TASK_HITCH_ANIMAL(iLocal_715, uVar0, 0);
      }
    }
  }
}