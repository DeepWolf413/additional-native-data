// bjack_launch_sp.ysc @ L7154
void func_189(int iParam0, int iParam1)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  switch (iParam1)
  {
    case 0:
      OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 3);
      break;
    case 1:
      OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 18);
      break;
    case 2:
      OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 21);
      break;
    case 3:
      OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 24);
      break;
    case 4:
      OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 27);
      break;
    case 5:
      OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 15);
      break;
    default:
      break;
  }
}