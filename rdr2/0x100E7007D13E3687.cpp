// industry3.ysc @ L60634
bool func_1511(char[4] cParam0)
{
  if (!func_1503(cParam0, 3))
  {
  }
  if (!func_1503(cParam0, 4))
  {
  }
  if (ENTITY::DOES_ENTITY_EXIST(vLocal_941[3 /*3*/].f_1) && ENTITY::DOES_ENTITY_EXIST(vLocal_941[4 /*3*/].f_1))
  {
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(vLocal_941[3 /*3*/].f_1, 3288.621f, -1306.145f, 42.037f, false, true, true);
    ENTITY::SET_ENTITY_QUATERNION(vLocal_941[3 /*3*/].f_1, 0.602f, 0.3745f, -0.602f, 0.3674f);
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(vLocal_941[4 /*3*/].f_1, 3291.251f, -1312.878f, 41.7629f, false, true, true);
    ENTITY::SET_ENTITY_QUATERNION(vLocal_941[4 /*3*/].f_1, 0f, 0f, 0.1862f, 0.9825f);
    return true;
  }
  return false;
}