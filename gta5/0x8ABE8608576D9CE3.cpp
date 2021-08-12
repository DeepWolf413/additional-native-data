// am_airstrike.ysc @ L2567
void func_86(var uParam0, var uParam1)
{
  float fVar0;
  
  *uParam0 = { func_88(Local_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
  fVar0 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_AREA((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
  if (uParam0->f_2 < fVar0)
  {
    uParam0->f_2 = fVar0;
  }
  *uParam1 = func_87(*uParam0, Local_60);
}