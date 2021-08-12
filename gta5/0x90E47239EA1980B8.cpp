// am_mp_garage_control.ysc @ L337
int func_4(struct<8> Param0, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
  if (Param0.f_7 != 0)
  {
    if (!OBJECT::IS_GARAGE_EMPTY(Param0.f_1, true, 2) || !OBJECT::IS_GARAGE_EMPTY(Param0.f_1, true, 3))
    {
      return 0;
    }
  }
  else if (!OBJECT::IS_GARAGE_EMPTY(Param0.f_1, true, 2))
  {
    return 0;
  }
  return 1;
}