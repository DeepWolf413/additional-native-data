// camp_beaverhollow.ysc @ L25985
void func_882(var uParam0)
{
  var uVar0;
  var uVar1;
  var uVar2;
  var uVar3;

  uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Ledger");
  *uParam0 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "CampId", 1);
  uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "RtSpreadTop");
  func_1222(uVar1, &(uParam0->f_1[0 /*237*/]));
  uVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "RtSpreadBottom");
  func_1222(uVar2, &(uParam0->f_1[1 /*237*/]));
  uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "DynamicCatalogItems");
  uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar3, "CatalogItemInspection");
  func_1223(uVar3, &(uParam0->f_476));
  uParam0->f_487 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "CampMoneyDonated", func_156());
  uParam0->f_488 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "CampMoneyLevel", "");
}