// beat_drunk_dueler.ysc @ L44672
void func_1341(int iParam0)
{
  var uVar0;
  char cVar1[32];
  int iVar5;

  if (iParam0 > 6)
  {
    return;
  }
  if (Global_1911643 != 0)
  {
    func_159();
  }
  DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1911643.f_3, true);
  Global_1911643 = iParam0;
  Global_1911643.f_1 = 0;
  iVar5 = 0;
  while (iVar5 < iParam0)
  {
    StringCopy(&cVar1, "Objective", 32);
    StringIntConCat(&cVar1, iVar5, 32);
    uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1911643.f_2, &cVar1);
    Global_1911643.f_5[iVar5 /*3*/] = uVar0;
    Global_1911643.f_5[iVar5 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "IsCurrent", 0);
    Global_1911643.f_5[iVar5 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "Failed", 0);
    DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1911643.f_4, iVar5, "objective_breadcrumb", uVar0);
    iVar5++;
  }
}