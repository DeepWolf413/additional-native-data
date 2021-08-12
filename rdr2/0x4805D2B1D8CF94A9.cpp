// act_caunc_rustling.ysc @ L58740
bool func_1620()
{
  if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
  {
    return true;
  }
  return false;
}

Vector3 func_1621(var uParam0)
{
  switch (*uParam0)
  {
    case 0:
    case 1:
    case 3:
    case 4:
      if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
      {
        return ENTITY::GET_ENTITY_VELOCITY(uParam0->f_2, -1);
      }
      break;
    case -1:
    case 2:
      return 0f, 0f, 0f;
  }
  return 0f, 0f, 0f;
}