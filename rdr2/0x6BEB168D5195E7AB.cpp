// medium_update.ysc @ L42244
int func_1282(var uParam0, int iParam1, vector3 vParam2)
{
  struct<4> Var0;
  int iVar5;
  vector3 vVar6;
  var uVar9;

  Var0 = uParam0;
  Var0.f_2 = -608279732;
  Var0.f_3 = iParam1;
  if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
  {
    return 0;
  }
  while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1) > iVar5)
  {
    Var0.f_3 = iVar5;
    Var0.f_2 = -870751591;
    DATAFILE::_DATAFILE_GET_VECTOR(&vVar6, &Var0);
    if (func_443(vVar6, vParam2) < 4f)
    {
      Var0.f_2 = -853103500;
      DATAFILE::_DATAFILE_GET_HASH(&uVar9, &Var0);
      return uVar9;
    }
    iVar5++;
  }
  return 0;
}