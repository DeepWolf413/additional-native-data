// aberdeenpigfarm.ysc @ L1191
void func_62()
{
  var uVar0;

  if (func_102(8))
  {
    return;
  }
  if (!func_102(2))
  {
    return;
  }
  uVar0 = func_113(1515000965);
  if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "ransacked_abe"))
  {
    func_114(&uVar0, 0);
  }
  else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "ransacked_abe01"))
  {
    func_114(&uVar0, 0);
  }
  else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "ransacked_abe03"))
  {
    func_114(&uVar0, 0);
  }
  else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "clean_abe"))
  {
    func_114(&uVar0, 1);
  }
  func_104(8);
}