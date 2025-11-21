# Collage-DS-Labes-workes

This repository contains my Data Structure lab works for BCA.  
All programs are written in C/C++ as per the college lab manual.

## Contents
- Different lab exercises  
- Basic Data Structure programs  
- Codes like array, stack, queue, linked list, etc.

## How to Use
1. Open any folder.  
2. Run the C/C++ file in your compiler.  
3. Check output and modify if needed.

## Author
Roshan Gupta
<!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width,initial-scale=1" />
  <title>Collage DS Labs - Summary</title>
  <style>
    body { font-family: Arial, sans-serif; max-width:800px; margin:30px auto; padding:0 16px; }
    h1 { color:#2c3e50; }
    ul { padding-left:20px; }
    li { margin:8px 0; cursor:pointer; }
    .details { margin-top:16px; padding:12px; border-radius:8px; background:#f4f4f4; }
    .btn { display:inline-block; margin-top:8px; padding:6px 10px; border-radius:6px; border:1px solid #ccc; cursor:pointer; }
  </style>
</head>
<body>
  <h1>Collage-DS-Labes-workes</h1>
  <p>Click a lab to see a short description.</p>

  <ul id="labList">
    <li data-id="3">Lab Exercise #3 — Arrays & Basic Operations</li>
    <li data-id="4">Lab Exercise #4 — Stacks (push/pop)</li>
    <li data-id="5">Lab Exercise #5 — Queues (enqueue/dequeue)</li>
    <li data-id="6">Lab Exercise #6 — Linked Lists</li>
  </ul>

  <div id="details" class="details">Select a lab to view details here.</div>

  <script>
    // Simple HTML function: showLabDetails(labId)
    // Call: showLabDetails(4)
    function showLabDetails(labId) {
      const detailsEl = document.getElementById('details');
      const info = {
        3: {
          title: 'Lab #3 — Arrays & Basics',
          desc: 'Programs for array traversal, insertion, deletion, sorting and searching (linear/binary).',
          files: ['lab3_array.c', 'lab3_search.cpp']
        },
        4: {
          title: 'Lab #4 — Stack',
          desc: 'Implement stack using array and linked list. Demonstrate push, pop, peek and isEmpty.',
          files: ['lab4_stack.c']
        },
        5: {
          title: 'Lab #5 — Queue',
          desc: 'Queue implementations: simple queue, circular queue, and priority queue (basic).',
          files: ['lab5_queue.c']
        },
        6: {
          title: 'Lab #6 — Linked List',
          desc: 'Singly and doubly linked list operations: insert, delete, reverse, display.',
          files: ['lab6_linkedlist.cpp']
        }
      };

      const lab = info[labId];
      if (!lab) {
        detailsEl.innerHTML = '<strong>No details found for this lab.</strong>';
        return;
      }

      detailsEl.innerHTML = `
        <h3>${lab.title}</h3>
        <p>${lab.desc}</p>
        <p><strong>Example files:</strong> ${lab.files.join(', ')}</p>
        <button class="btn" onclick="window.location.href='#'">Open folder</button>
      `;
    }

    // Add click handlers to list items
    document.getElementById('labList').addEventListener('click', function(e) {
      const li = e.target.closest('li');
      if (!li) return;
      const id = li.getAttribute('data-id');
      showLabDetails(Number(id));
    });
  </script>
</body>
</html>
