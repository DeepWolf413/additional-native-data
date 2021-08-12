// braithwaites2.ysc @ L55326
bool func_1352()
{
  vector3 vVar0;
  float fVar3;

  vVar0 = { 0f, 0f, 0f };
  fVar3 = 0f;
  FIRE::GET_CLOSEST_FIRE_POS(&vVar0, 1834.4f, -1275.44f, 42.35f);
  fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, 1834.4f, -1275.44f, 42.35f, false);
  if (fVar3 < 7.5f)
  {
    return true;
  }
  if (FIRE::_IS_EXPLOSION_IN_VOLUME(2, uLocal_4889[7]) || FIRE::_IS_EXPLOSION_IN_VOLUME(25, uLocal_4889[7]))
  {
    return true;
  }
  return false;
}